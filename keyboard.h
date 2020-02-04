#ifndef KEYBOARD_H
#define KEYBOARD_H

/**
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboard.h
*
* Description       : Header do teclado virtual com layout QWERTY brasileiro para aplicações em C++ utilizando GTK-- e sigc++
*
* Author            : MatTerra
*
* Date created      : 20200203
*
*
*
* Revision History  :
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format)
* 20200203    MatTerra      1    Initial Version
*
**********************************************************************
*/

#include <gtkmm/grid.h>
#include <gtkmm/box.h>
#include <glibmm/ustring.h>
#include <sigc++/trackable.h>
#include "keyboardbutton.h"


class Keyboard : public Gtk::Grid{
public:
  /** Construtor Padrão */
  Keyboard();
  /**
   * @brief onKeyPress Slot para processamento de clique recebido no teclado virtual. Recebe o sinal vindo das teclas e dispara o sinal com o input.
   */
  void onKeyPress(Glib::ustring);
  /**
   * @brief type_signal_input Tipo de sinal emitido pelo teclado.
   */
  typedef sigc::signal<void, Glib::ustring> type_signal_input;
  /**
   * @brief signal_input Sinal do input que é emitido pelo teclado.
   * @return m_signal_input O input do teclado.
   */
  type_signal_input signal_input();
protected:
  type_signal_input m_signal_input; //!< Variável de instância do objeto do sinal que é emitido.
};

#endif // KEYBOARD_H
