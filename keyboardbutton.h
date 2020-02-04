#ifndef KEYBOARDBUTTON_H
#define KEYBOARDBUTTON_H

/**
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboardbutton.h
*
* Description       : Header do botão para teclado virtual para aplicações em C++ utilizando GTK-- e sigc++
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
*
**********************************************************************
*/

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
