#include "keyboard.h"


/*
**********************************************************************
* Project           : VirtualKeyboard
*
* File name         : keyboard.cpp
*
* Description       : Implementação do teclado virtual com layout QWERTY brasileiro para aplicações em C++ utilizando GTK-- e sigc++.
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
* Date        Author        Ref    Revision (Date in YYYYMMDD format)
* 20200203    MatTerra        1    Initial Version
* 20200204    MatTerra        2    Added layout properties to expand
*
**********************************************************************
*/

Keyboard::Keyboard():Gtk::Grid(){
  set_hexpand(true);
  set_vexpand(true);
  set_halign(Gtk::ALIGN_FILL);
  set_valign(Gtk::ALIGN_FILL);
  set_row_spacing(10);
  set_column_spacing(10);

  KeyboardButton* qButton = new KeyboardButton("q");
  attach(*qButton,0,0);
  qButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  KeyboardButton* wButton = new KeyboardButton("w");
  attach(*wButton,1,0);
  wButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  KeyboardButton* eButton = new KeyboardButton("e");
  attach(*eButton,2,0);
  KeyboardButton* rButton = new KeyboardButton("r");
  attach(*rButton,3,0);
  KeyboardButton* tButton = new KeyboardButton("t");
  attach(*tButton,4,0);
  KeyboardButton* yButton = new KeyboardButton("y");
  attach(*yButton,5,0);
  KeyboardButton* uButton = new KeyboardButton("u");
  attach(*uButton,6,0);
  KeyboardButton* iButton = new KeyboardButton("i");
  attach(*iButton,7,0);
  KeyboardButton* oButton = new KeyboardButton("o");
  attach(*oButton,8,0);
  KeyboardButton* pButton = new KeyboardButton("p");
  attach(*pButton,9,0);
  KeyboardButton* acuteButton = new KeyboardButton("´");
  attach(*acuteButton,10,0);
  KeyboardButton* aButton = new KeyboardButton("a");
  attach(*aButton,0,1);
  KeyboardButton* sButton = new KeyboardButton("s");
  attach(*sButton,1,1);
  KeyboardButton* dButton = new KeyboardButton("d");
  attach(*dButton,2,1);
  KeyboardButton* fButton = new KeyboardButton("f");
  attach(*fButton,3,1);
  KeyboardButton* gButton = new KeyboardButton("g");
  attach(*gButton,4,1);
  KeyboardButton* hButton = new KeyboardButton("h");
  attach(*hButton,5,1);
  KeyboardButton* jButton = new KeyboardButton("j");
  attach(*jButton,6,1);
  KeyboardButton* kButton = new KeyboardButton("k");
  attach(*kButton,7,1);
  KeyboardButton* lButton = new KeyboardButton("l");
  attach(*lButton,8,1);
  KeyboardButton* cCedilButton = new KeyboardButton("ç");
  attach(*cCedilButton,9,1);
  KeyboardButton* graveButton = new KeyboardButton("^");
  attach(*graveButton,10,1);
  KeyboardButton* zbutton = new KeyboardButton("z");
  attach(*zbutton,2,2);
  KeyboardButton* xButton = new KeyboardButton("x");
  attach(*xButton,3,2);
  KeyboardButton* cButton = new KeyboardButton("c");
  attach(*cButton,4,2);
  KeyboardButton* vButton = new KeyboardButton("v");
  attach(*vButton,5,2);
  KeyboardButton* bButton = new KeyboardButton("b");
  attach(*bButton,6,2);
  KeyboardButton* nButton = new KeyboardButton("n");
  attach(*nButton,7,2);
  KeyboardButton* mButton = new KeyboardButton("m");
  attach(*mButton,8,2);
  show_all();
}

void Keyboard::onKeyPress(Glib::ustring letter){
  std::cout << letter.raw() << std::endl;
  m_signal_input.emit(letter);
}

Keyboard::type_signal_input Keyboard::signal_input(){
  return m_signal_input;
}

