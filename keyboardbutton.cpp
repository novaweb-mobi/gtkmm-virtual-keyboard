#include "keyboardbutton.h"

/*
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboardbutton.cpp
*
* Description       : Implementação do botão para teclado virtual para aplicações em C++ utilizando GTK-- e sigc++
*
* Author            : MatTerra
*
* Date created      : 20200203
*
* Copyright         : Novaweb - 2020
*
*
* Revision History  :
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format)
* 20200203    MatTerra      1    Initial Version
* 20200204    MatTerra      2    Ajustes de layout
*
**********************************************************************
*/

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
