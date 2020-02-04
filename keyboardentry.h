#ifndef KEYBOARDENTRY_H
#define KEYBOARDENTRY_H

#include <gtkmm/entry.h>
#include <glibmm/ustring.h>

class KeyboardEntry : public Gtk::Entry
{
public:
  KeyboardEntry();
  void append_text(Glib::ustring);
};

#endif // KEYBOARDENTRY_H
