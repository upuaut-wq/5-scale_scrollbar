#include <iostream>
#include "scale_scroll.h"

Scale_Scrool::Scale_Scrool(){
    this->add(this->m_box);
    this->m_box.set_orientation(Gtk::ORIENTATION_VERTICAL);
    this->m_box.pack_start(this->m_scale);
    this->m_box.pack_start(this->m_scrollb);

    //Adiciona uma configuração ao scale. Isso vale para qualquer widget que tenha comportamento semelhante.
    this->m_adj = Gtk::Adjustment::create(50,0,100,1,1,1);
    this->m_scale.set_adjustment(this->m_adj);
    this->m_scrollb.set_adjustment(this->m_adj);

    //Ajustes individuais
    this->m_scale.set_draw_value(false);
    this->m_scale.add_mark(0,Gtk::POS_BOTTOM,"0");
    this->m_scale.add_mark(25,Gtk::POS_BOTTOM,"25");
    this->m_scale.add_mark(50,Gtk::POS_BOTTOM,"50");
    this->m_scale.add_mark(75,Gtk::POS_BOTTOM,"75");
    this->m_scale.add_mark(100,Gtk::POS_BOTTOM,"100");


    this->show_all_children();
}



Scale_Scrool::~Scale_Scrool(){
    
}