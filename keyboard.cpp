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
* 20200204    Victor-Matheus  3    Implementação dos botões e conexão dos sinais
**********************************************************************
*/

Keyboard::Keyboard():Gtk::Grid(){
  set_hexpand(true);
  set_vexpand(true);
  set_halign(Gtk::ALIGN_FILL);
  set_valign(Gtk::ALIGN_FILL);
  set_row_spacing(10);
  set_column_spacing(10);
  this.createButtons();
  this.buildLayout();
  this.connectSignals();
}

void KeyboardButton::connectSignals(){
  qButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );  
  wButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  eButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  rButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  tButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  yButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  uButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  iButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  oButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  pButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );                                                                                                  
  acuteButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  aButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  sButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  dButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );   
  fButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  gButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  hButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  jButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );   
  kButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  lButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  ccdiuButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );   
  graveButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );    
  zButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );  
  xButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );    
  cButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );   
  vButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );  
  bButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  nButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  mButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  spaceButton->signal_keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
}

void KeyboardButton::createButtons(){
  KeyboardButton* qButton = new KeyboardButton("q");

  KeyboardButton* wButton = new KeyboardButton("w");
  
  KeyboardButton* eButton = new KeyboardButton("e");
  
  KeyboardButton* rButton = new KeyboardButton("r");
 
  KeyboardButton* tButton = new KeyboardButton("t");
 
  KeyboardButton* yButton = new KeyboardButton("y");
 
  KeyboardButton* uButton = new KeyboardButton("u");
  
  KeyboardButton* iButton = new KeyboardButton("i");
  
  KeyboardButton* oButton = new KeyboardButton("o");
  
  KeyboardButton* pButton = new KeyboardButton("p");
 
  KeyboardButton* acuteButton = new KeyboardButton("´");
 
  KeyboardButton* aButton = new KeyboardButton("a");
  
  KeyboardButton* sButton = new KeyboardButton("s");
  
  KeyboardButton* dButton = new KeyboardButton("d");
  
  KeyboardButton* fButton = new KeyboardButton("f");
  
  KeyboardButton* gButton = new KeyboardButton("g");
  
  KeyboardButton* hButton = new KeyboardButton("h");
  
  KeyboardButton* jButton = new KeyboardButton("j");
  
  KeyboardButton* kButton = new KeyboardButton("k");
  
  KeyboardButton* lButton = new KeyboardButton("l");
  
  KeyboardButton* ccdiuButton = new KeyboardButton("ç");
 
  KeyboardButton* graveButton = new KeyboardButton("^");
  
  KeyboardButton* zButton = new KeyboardButton("z");
  
  KeyboardButton* xButton = new KeyboardButton("x");
  
  KeyboardButton* cButton = new KeyboardButton("c");
  
  KeyboardButton* vButton = new KeyboardButton("v");
  
  KeyboardButton* bButton = new KeyboardButton("b");
  
  KeyboardButton* nButton = new KeyboardButton("n");
 
  KeyboardButton* mButton = new KeyboardButton("m");
  
  KeyboardButton* spaceButton = new KeyboardButton(" ");
}

void KeyboardButton::buildLayout(){
  attach(*qButton,0,0);

  attach(*wButton,1,0);

  attach(*eButton,2,0);

  attach(*rButton,3,0);

  attach(*tButton,4,0);
 
  attach(*yButton,5,0);
  
  attach(*uButton,6,0);
 
  attach(*iButton,7,0);
  
  attach(*oButton,8,0);
  
  attach(*pButton,9,0);
 
  attach(*acuteButton,10,0);
  
  attach(*aButton,0,1);
 
  attach(*sButton,1,1);
  
  attach(*dButton,2,1);
 
  attach(*fButton,3,1);
  
  attach(*gButton,4,1);
  
  attach(*hButton,5,1);
 
  attach(*jButton,6,1);
  
  attach(*kButton,7,1);
 
  attach(*lButton,8,1);
  
  attach(*ccdiuButton,9,1);
 
  attach(*graveButton,10,1);
 
  attach(*zButton,2,2);
  
  attach(*xButton,3,2);
  
  attach(*cButton,4,2);
  
  attach(*vButton,5,2);
  
  attach(*bButton,6,2);
  
  attach(*nButton,7,2);
  
  attach(*mButton,8,2);
  
  attach(*spaceButton,2,3,7);
  
  show_all();
}


void Keyboard::onKeyPress(Glib::ustring letter){
  std::cout << letter.raw() << std::endl;
  m_signal_input.emit(letter);
}

Keyboard::type_signal_input Keyboard::signal_input(){
  return m_signal_input;
}

