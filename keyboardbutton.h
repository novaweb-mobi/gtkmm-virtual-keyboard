#ifndef KEYBOARDBUTTON_H
#define KEYBOARDBUTTON_H

#include <gtkmm/button.h>
#include <glibmm/ustring.h>
#include <sigc++/signal.h>
#include <iostream>

class KeyboardButton : public Gtk::Button{
public:
  KeyboardButton(const char*);
  //signal accessor:
  typedef sigc::signal<void, Glib::ustring> type_signal_keypress;
  type_signal_keypress signal_keypress();
protected:
  type_signal_keypress m_signal_keypress;
  virtual void on_clicked();
};

#endif // KEYBOARDBUTTON_H
