#include <iostream>
#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/entry.h>
#include "keyboardbutton.h"
#include "keyboard.h"
#include "keyboardentry.h"



int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");
  Gtk::Window window;
  window.fullscreen();
  Gtk::VBox layout;
  KeyboardEntry entry;
  Keyboard* keyboard = new Keyboard();
  keyboard->signal_input().connect(sigc::mem_fun(entry,
                &KeyboardEntry::append_text));
  layout.pack_end(*keyboard);
  keyboard->show_all();
  layout.pack_end(entry);
  layout.show_all();
  window.add(layout);
  app->run(window);
}
