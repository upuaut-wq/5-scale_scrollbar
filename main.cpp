#include <gtkmm/application.h>
#include "scale_scroll.h"

int main(int argc, char *argv[]){
   Glib::RefPtr<Gtk::Application> app =  Gtk::Application::create(argc, argv, "teste.scale.scroll");
   Scale_Scrool scr;
   app->run(scr);
}