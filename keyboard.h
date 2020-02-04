#ifndef KEYBOARD_H
#define KEYBOARD_H

/*
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboard.h
*
* Description       : Header do teclado virtual com layout QWERTY brasileiro para aplicações em C++ utilizando GTK-- e sigc++
*
* Author            : MatTerra, Victor-Matheus
*
* Date created      : 20200203
*
* Copyright         : Novaweb - 2020
*
*
* Revision History  :
*
* Date        Author          Ref    Revision (Date in YYYYMMDD format)
* 20200203    MatTerra        1      Initial Version
* 20200204    Victor-Matheus  2      Implementação do teclado e documentação
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

private:

  /**
   * @brief buildLayout Adiciona os botões a grid de acordo com o padrão de teclado brasileiro QWERTY.
   */
  void buildLayout();

  /**
   * @brief connectSignals Conecta os sinais de cliques dos botões ao processador do teclado.
   */
  void connectSignals();

  /**
   * @brief createButtons Cria as instâncias dos botões para o teclado.
   */
  void createButtons();

  KeyboardButton* qButton; //!< Atributo de instância "qButton". Botão "q" do teclado.
  KeyboardButton* wButton; //!< Atributo de instância "wButton". Botão "w" do teclado.
  KeyboardButton* eButton; //!< Atributo de instância "eButton". Botão "e" do teclado.
  KeyboardButton* rButton; //!< Atributo de instância "rButton". Botão "r" do teclado.
  KeyboardButton* tButton; //!< Atributo de instância "tButton". Botão "t" do teclado.
  KeyboardButton* yButton; //!< Atributo de instância "yButton". Botão "y" do teclado.
  KeyboardButton* uButton; //!< Atributo de instância "uButton". Botão "u" do teclado.
  KeyboardButton* iButton; //!< Atributo de instância "iButton". Botão "i" do teclado.
  KeyboardButton* oButton; //!< Atributo de instância "oButton". Botão "o" do teclado.
  KeyboardButton* pButton; //!< Atributo de instância "pButton". Botão "p" do teclado.
  KeyboardButton* acuteButton; //!< Atributo de instância "acuteButton". Botão "acute" do teclado.
  KeyboardButton* aButton; //!< Atributo de instância "aButton". Botão "a" do teclado.
  KeyboardButton* sButton; //!< Atributo de instância "sButton". Botão "s" do teclado.
  KeyboardButton* dButton; //!< Atributo de instância "dButton". Botão "d" do teclado.
  KeyboardButton* fButton; //!< Atributo de instância "fButton". Botão "f" do teclado.
  KeyboardButton* gButton; //!< Atributo de instância "gButton". Botão "g" do teclado.
  KeyboardButton* hButton; //!< Atributo de instância "hButton". Botão "h" do teclado.
  KeyboardButton* jButton; //!< Atributo de instância "jButton". Botão "j" do teclado.
  KeyboardButton* kButton; //!< Atributo de instância "kButton". Botão "k" do teclado.
  KeyboardButton* lButton; //!< Atributo de instância "lButton". Botão "l" do teclado.
  KeyboardButton* ccdiuButton; //!< Atributo de instância "ccdiuButton". Botão "ç" do teclado.
  KeyboardButton* graveButton; //!< Atributo de instância "graveButton". Botão "^" do teclado.
  KeyboardButton* zButton; //!< Atributo de instância "zButton". Botão "z" do teclado.
  KeyboardButton* xButton; //!< Atributo de instância "xButton". Botão "x" do teclado.
  KeyboardButton* cButton; //!< Atributo de instância "cButton". Botão "c" do teclado.
  KeyboardButton* vButton; //!< Atributo de instância "vButton". Botão "v" do teclado.
  KeyboardButton* bButton; //!< Atributo de instância "bButton". Botão "b" do teclado.
  KeyboardButton* nButton; //!< Atributo de instância "nButton". Botão "n" do teclado.
  KeyboardButton* mButton; //!< Atributo de instância "mButton". Botão "m" do teclado.
  KeyboardButton* spaceButton; //!< Atributo de instância "spaceButton". Botão " " do teclado.

protected:
  type_signal_input m_signal_input; //!< Variável de instância do objeto do sinal que é emitido.

};

#endif // KEYBOARD_H
