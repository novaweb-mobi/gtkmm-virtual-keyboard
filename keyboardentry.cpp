#include "keyboardentry.h"

/**
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboardentry.cpp
*
* Description       : Implementação do widget de entrada compatível com teclado virtual para aplicações em C++ utilizando GTK-- e sigc++
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

KeyboardEntry::KeyboardEntry() : Gtk::Entry()
{

}

void KeyboardEntry::append_text(Glib::ustring text){
  set_text(get_text()+text);
}
