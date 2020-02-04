#ifndef KEYBOARDENTRY_H
#define KEYBOARDENTRY_H

/*
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboardentry.h
*
* Description       : Header do widget de entrada compatível com teclado virtual para aplicações em C++ utilizando GTK-- e sigc++
*
* Author            : MatTerra
*
* Date Criated      : 20200203
*
* Copyright         : Novaweb - 2020
*
*
* Revision History  :
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format)
*
* 20200203    MatTerra      1    Initial Version
*
**********************************************************************
*/

#include <gtkmm/entry.h>
#include <glibmm/ustring.h>

class KeyboardEntry : public Gtk::Entry
{
public:
  /** Construtor Padrão */
  KeyboardEntry();

  /**
   * @brief append_text Adiciona o texto recebido ao final do texto atual do KeyboardEntry
   * @param text Texto a ser adicionado
   */
  void append_text(Glib::ustring);
};

#endif // KEYBOARDENTRY_H
