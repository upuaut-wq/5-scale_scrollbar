#ifndef GTKMM_SCALE_SCROLL_H
#define GTKMM_SCALE_SCROLL_H

#include <gtkmm/window.h>
#include <gtkmm/scale.h>
#include <gtkmm/scrollbar.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/box.h>
#include <gdkmm/pixbuf.h>
#include <gtkmm/image.h>


class Scale_Scrool:public Gtk::Window{
    public:
        Scale_Scrool();
        virtual ~Scale_Scrool();
    protected:
        Gtk::Box m_box;
        Gtk::Scale m_scale;
        Gtk::Scrollbar m_scrollb;
        Glib::RefPtr<Gtk::Adjustment> m_adj;

        Glib::RefPtr<Gdk::Pixbuf> m_ref_img;
        Gtk::Image m_image;
        void on_scale_size();

};


#endif //GTKMM_SCALE_SCROLL_H