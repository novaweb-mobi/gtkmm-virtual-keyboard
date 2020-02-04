#include "keyboardentry.h"

KeyboardEntry::KeyboardEntry() : Gtk::Entry()
{

}

void KeyboardEntry::append_text(Glib::ustring text){
  set_text(get_text()+text);
}
