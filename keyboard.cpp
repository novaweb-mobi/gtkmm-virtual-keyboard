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
  this->createButtons();
  this->buildLayout();
  this->connectSignals();
}

void Keyboard::connectSignals(){
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
  atsignButton->signal_Keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  tilButton->signal_Keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  underButton->signal_Keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  hifenButton->signal_Keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) ); 
  pointButton->signal_Keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );
  irButton->signal_Keypress().connect(sigc::mem_fun(this,
                &Keyboard::onKeyPress) );                                         
}

void Keyboard::createButtons(){
   qButton = new KeyboardButton("q");

   wButton = new KeyboardButton("w");
  
   eButton = new KeyboardButton("e");
  
   rButton = new KeyboardButton("r");
 
   tButton = new KeyboardButton("t");
 
   yButton = new KeyboardButton("y");
 
   uButton = new KeyboardButton("u");
  
   iButton = new KeyboardButton("i");
  
   oButton = new KeyboardButton("o");
  
   pButton = new KeyboardButton("p");
 
   acuteButton = new KeyboardButton("´");
 
   aButton = new KeyboardButton("a");
  
   sButton = new KeyboardButton("s");
  
   dButton = new KeyboardButton("d");
  
   fButton = new KeyboardButton("f");
  
   gButton = new KeyboardButton("g");
  
   hButton = new KeyboardButton("h");
  
   jButton = new KeyboardButton("j");
  
   kButton = new KeyboardButton("k");
  
   lButton = new KeyboardButton("l");
  
   ccdiuButton = new KeyboardButton("ç");
 
   graveButton = new KeyboardButton("^");
  
   zButton = new KeyboardButton("z");
  
   xButton = new KeyboardButton("x");
  
   cButton = new KeyboardButton("c");
  
   vButton = new KeyboardButton("v");
  
   bButton = new KeyboardButton("b");
  
   nButton = new KeyboardButton("n");
 
   mButton = new KeyboardButton("m");

   atsignButton = new KeyboardButton("@");

   tilButton = new KeyboardButton("~");

   underButton = new KeyboardButton("_");

   hifenButton = new KeyboardButton("-");

   spaceButton = new KeyboardButton(" ");

   pointButton = new KeyboardButton(".");

   irButton = new KeyboardButton("Ir");

   toupperButton = new KeyboardButton("\u2191");
}

void Keyboard::buildLayout(){
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
  
  attach(*spaceButton,2,3,6);
  
  attach(*atsignButton,11,0);

  attach(*tilButton,9,2);

  attach(*underButton,11,1);

  attach(*hifenButton,10,2);

  attach(*pointButton,10,3);

  attach(*irButton,11,3,2);

  attach(*toupperButton,0,2,2,2);

  show_all();
}


void Keyboard::onKeyPress(Glib::ustring letter){
  std::cout << letter.raw() << std::endl;
  if (letter == "\u2191"){

    flagUpper = !flagUpper;

  }
  if (flagUpper){

    letter = toupper(letter);

  }

  m_signal_input.emit(letter);
}

Keyboard::type_signal_input Keyboard::signal_input(){
  return m_signal_input;
}



