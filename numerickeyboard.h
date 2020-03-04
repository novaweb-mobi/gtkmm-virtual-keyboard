#ifndef NUMERICKEYBOARD_H
#define NUMERICKEYBOARD_H

#include <gtkmm/grid.h>
#include <gtkmm/box.h>
#include <glibmm/ustring.h>
#include <sigc++/trackable.h>
#include "keyboardbutton.h"


class NumericKeyboard : public Gtk::Grid{
public:
  /** Construtor Padrão */
  NumericKeyboard();
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

  bool flagUpper = false;

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
  KeyboardButton* backspaceButton; //!< Atributo de instância "backspaceButton". Botão "\u2190" do teclado.
  KeyboardButton* irButton; //!< Atributo de instância "irButton". Botão "Ir" do teclado.

  protected:
  type_signal_input m_signal_input; //!< Variável de instância do objeto do sinal que é emitido.
}

#endif // NUMERICKEYBOARD_H