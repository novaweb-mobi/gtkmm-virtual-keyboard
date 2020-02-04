#ifndef KEYBOARDENTRY_H
#define KEYBOARDENTRY_H

/**
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboardentry.h
*
* Description       : Header do widget de entrada compatível com teclado virtual para aplicações em C++ utilizando GTK-- e sigc++
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

#include <gtkmm/entry.h>
#include <glibmm/ustring.h>

class KeyboardEntry : public Gtk::Entry
{
public:
  KeyboardEntry();
  void append_text(Glib::ustring);
};

#endif // KEYBOARDENTRY_H
