#ifndef GTKMM_SCALE_SCROLL_H
#define GTKMM_SCALE_SCROLL_H

#include <gtkmm/window.h>
#include <gtkmm/scale.h>
#include <gtkmm/scrollbar.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/box.h>


class Scale_Scrool:public Gtk::Window{
    public:
        Scale_Scrool();
        virtual ~Scale_Scrool();
    private:
        Gtk::Box m_box;
        Gtk::Scale m_scale;
        Gtk::Scrollbar m_scrollb;
        Glib::RefPtr<Gtk::Adjustment> m_adj;

};


#endif //GTKMM_SCALE_SCROLL_H