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
* 20200210    MatTerra        3      Alteração do tratamento de upper case e acentos
**********************************************************************
*/
class KeyboardButton;
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

  /**
   * @brief type_signal_upper Tipo de sinal emitido pelo teclado para transformar o texto em uppercase.
   */
  typedef sigc::signal<void> type_signal_upper;

  /**
   * @brief signal_upper Sinal de transformar o texto em uppercase que é emitido pelo teclado.
   */
  type_signal_upper signal_upper();


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
  KeyboardButton* atsignButton; //!< Atributo de instância "atsignButton". Botão "@" do teclado.
  KeyboardButton* tilButton; //!< Atributo de instância "tilButton". Botão "~" do teclado.
  KeyboardButton* underButton; //!< Atributo de instância "underButton". Botão "_" do teclado.
  KeyboardButton* hifenButton; //!< Atributo de instância "hifenButton". Botão "-" do teclado.
  KeyboardButton* pointButton; //!< Atributo de instância "pointButton". Botão "." do teclado.
  KeyboardButton* irButton; //!< Atributo de instância "irButton". Botão "Ir" do teclado.
  KeyboardButton* toupperButton; //!< Atributo de instância "toupperButton". Botão "\u2191" do teclado.
  KeyboardButton* backspaceButton; //!< Atributo de instância "backspaceButton". Botão "\u2190" do teclado.
  KeyboardButton* Button_0; //!< Atributo de instância "Button_0". Botão "0" do teclado.
  KeyboardButton* Button_1; //!< Atributo de instância "Button_1". Botão "1" do teclado.
  KeyboardButton* Button_2; //!< Atributo de instância "Button_2". Botão "2" do teclado.
  KeyboardButton* Button_3; //!< Atributo de instância "Button_3". Botão "3" do teclado.
  KeyboardButton* Button_4; //!< Atributo de instância "Button_4". Botão "4" do teclado.
  KeyboardButton* Button_5; //!< Atributo de instância "Button_5". Botão "5" do teclado.
  KeyboardButton* Button_6; //!< Atributo de instância "Button_6". Botão "6" do teclado.
  KeyboardButton* Button_7; //!< Atributo de instância "Button_7". Botão "7" do teclado.
  KeyboardButton* Button_8; //!< Atributo de instância "Button_8". Botão "8" do teclado.
  KeyboardButton* Button_9; //!< Atributo de instância "Button_9". Botão "9" do teclado.

  bool flagAcute = false, //!< Atributo de instância "flagAcute". Flag que acusa acento agudo no buffer.
       flagGrave = false, //!< Atributo de instância "flagGrave". Flag que acusa acento circunflexo no buffer.
       flagTilde = false, //!< Atributo de instância "flagTilde". Flag que acusa tio no buffer.
       isUpper=false; //!< Atributo de instância "isUpper". Flag que acusa letra maiúscula ativada.

protected:
  type_signal_input m_signal_input; //!< Variável de instância do objeto do sinal que é emitido com a entrada de texto.
  type_signal_upper m_signal_upper; //!< Variável de instância do objeto do sinal que é emitido para transformar texto em upper case.
};

#endif // KEYBOARD_H
