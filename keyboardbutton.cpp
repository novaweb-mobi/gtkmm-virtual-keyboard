#include "keyboardbutton.h"

KeyboardButton::KeyboardButton(const char* c): Gtk::Button(c){
  set_hexpand(true);
  set_vexpand(true);
  set_halign(Gtk::ALIGN_FILL);
  set_valign(Gtk::ALIGN_FILL);
}

void KeyboardButton::on_clicked(){
  m_signal_keypress.emit(Gtk::Button::get_label());
}

KeyboardButton::type_signal_keypress KeyboardButton::signal_keypress(){
  return m_signal_keypress;
}
