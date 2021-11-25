#include <iostream>
#include "scale_scroll.h"

Scale_Scrool::Scale_Scrool(){
    this->add(this->m_box);
    this->set_size_request(200,100);

    this->m_box.set_orientation(Gtk::ORIENTATION_VERTICAL);
    this->m_box.pack_start(this->m_scale);
    this->m_box.pack_start(this->m_scrollb);

    //Adiciona uma configuração ao scale. Isso vale para qualquer widget que tenha comportamento semelhante.
    this->m_adj = Gtk::Adjustment::create(50,0,100,1,1,1);
    this->m_scale.set_adjustment(this->m_adj);
    this->m_scrollb.set_adjustment(this->m_adj);

    //Ajustes individuais
    this->m_scale.add_mark(0,Gtk::POS_BOTTOM,"0");
    this->m_scale.add_mark(25,Gtk::POS_BOTTOM,"25");
    this->m_scale.add_mark(50,Gtk::POS_BOTTOM,"50");
    this->m_scale.add_mark(75,Gtk::POS_BOTTOM,"75");
    this->m_scale.add_mark(100,Gtk::POS_BOTTOM,"100");
    this->m_scale.set_value_pos(Gtk::POS_RIGHT);

    //Image
    this->m_ref_img = Gdk::Pixbuf::create_from_file("deb.png",100,100,true);
    this->m_image.set(this->m_ref_img);
    this->m_scale.signal_value_changed().connect(sigc::mem_fun(*this,&Scale_Scrool::on_scale_size));
    this->m_box.pack_start(this->m_image);
    this->show_all_children();

}



Scale_Scrool::~Scale_Scrool(){
    
}


void Scale_Scrool::on_scale_size(){
    const int tam = this->m_scale.get_value();
    this->m_ref_img = Gdk::Pixbuf::create_from_file("deb.png",(float)tam + 100,(float)tam + 100);
    this->m_image.set(this->m_ref_img);
}