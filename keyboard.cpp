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
* 20200210    MatTerra        4    Alteração do tratamento de upper case e acentos
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
  this->createButtons();
  this->buildLayout();
  this->connectSignals();
}

void Keyboard::connectSignals(){
  qButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  wButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  eButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  rButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  tButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  yButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  uButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  iButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  oButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  pButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  acuteButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress));
  aButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  sButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  dButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  fButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  gButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  hButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  jButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  kButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  lButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  ccdiuButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  graveButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  zButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  xButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  cButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  vButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  bButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  nButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  mButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  spaceButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  atsignButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  tilButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  underButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  hifenButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  pointButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  irButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  toupperButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  backspaceButton->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_0->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_1->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_2->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_3->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_4->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_5->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_6->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_7->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_8->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
  Button_9->signal_keypress().connect(sigc::mem_fun(this, &Keyboard::onKeyPress) );
}

void Keyboard::createButtons(){
   qButton = new KeyboardButton("q", this);
   wButton = new KeyboardButton("w", this);
   eButton = new KeyboardButton("e", this);
   rButton = new KeyboardButton("r", this);
   tButton = new KeyboardButton("t", this);
   yButton = new KeyboardButton("y", this);
   uButton = new KeyboardButton("u", this);
   iButton = new KeyboardButton("i", this);
   oButton = new KeyboardButton("o", this);
   pButton = new KeyboardButton("p", this);
   acuteButton = new KeyboardButton("'", this);
   aButton = new KeyboardButton("a", this);
   sButton = new KeyboardButton("s", this);
   dButton = new KeyboardButton("d", this);
   fButton = new KeyboardButton("f", this);
   gButton = new KeyboardButton("g", this);
   hButton = new KeyboardButton("h", this);
   jButton = new KeyboardButton("j", this);
   kButton = new KeyboardButton("k", this);
   lButton = new KeyboardButton("l", this);
   ccdiuButton = new KeyboardButton("ç", this);
   graveButton = new KeyboardButton("^", this);
   zButton = new KeyboardButton("z", this);
   xButton = new KeyboardButton("x", this);
   cButton = new KeyboardButton("c", this);
   vButton = new KeyboardButton("v", this);
   bButton = new KeyboardButton("b", this);
   nButton = new KeyboardButton("n", this);
   mButton = new KeyboardButton("m", this);
   atsignButton = new KeyboardButton("@", this);
   tilButton = new KeyboardButton("~", this);
   underButton = new KeyboardButton("_", this);
   hifenButton = new KeyboardButton("-", this);
   spaceButton = new KeyboardButton(" ", this);
   pointButton = new KeyboardButton(".", this);
   irButton = new KeyboardButton("\u2192", this);
   toupperButton = new KeyboardButton("\u2191", this);    // Upper
   backspaceButton = new KeyboardButton("\u2190", this);  // Backspace
   Button_0 = new KeyboardButton("0", this);
   Button_1 = new KeyboardButton("1", this);
   Button_2 = new KeyboardButton("2", this);
   Button_3 = new KeyboardButton("3", this);
   Button_4 = new KeyboardButton("4", this);
   Button_5 = new KeyboardButton("5", this);
   Button_6 = new KeyboardButton("6", this);
   Button_7 = new KeyboardButton("7", this);
   Button_8 = new KeyboardButton("8", this);
   Button_9 = new KeyboardButton("9", this);
}

void Keyboard::buildLayout(){
  attach(*Button_0,9,0);
  attach(*Button_1,0,0);
  attach(*Button_2,1,0);
  attach(*Button_3,2,0);
  attach(*Button_4,3,0);
  attach(*Button_5,4,0);
  attach(*Button_6,5,0);
  attach(*Button_7,6,0);
  attach(*Button_8,7,0);
  attach(*Button_9,8,0);
  attach(*qButton,0,1);
  attach(*wButton,1,1);
  attach(*eButton,2,1);
  attach(*rButton,3,1);
  attach(*tButton,4,1);
  attach(*yButton,5,1);
  attach(*uButton,6,1);
  attach(*iButton,7,1);
  attach(*oButton,8,1);
  attach(*pButton,9,1);
  attach(*acuteButton,10,1);
  attach(*aButton,0,2);
  attach(*sButton,1,2);
  attach(*dButton,2,2);
  attach(*fButton,3,2);
  attach(*gButton,4,2);
  attach(*hButton,5,2);
  attach(*jButton,6,2);
  attach(*kButton,7,2);
  attach(*lButton,8,2);
  attach(*ccdiuButton,9,1);
  attach(*graveButton,10,2);
  attach(*zButton,2,3);
  attach(*xButton,3,3);
  attach(*cButton,4,3);
  attach(*vButton,5,3);
  attach(*bButton,6,3);
  attach(*nButton,7,3);
  attach(*mButton,8,3);
  attach(*spaceButton,2,4,7,2);
  attach(*atsignButton,11,1);
  attach(*tilButton,10,3);
  attach(*underButton,11,2);
  attach(*hifenButton,11,3);
  attach(*pointButton,9,4);
  attach(*irButton,10,4,2);
  attach(*toupperButton,0,4,2);
  attach(*backspaceButton,10,0,2);
  show_all();
}


void Keyboard::onKeyPress(Glib::ustring letter){
  if (letter == "\u2191"){
    m_signal_upper.emit();
    isUpper = !isUpper;
    return;
  }
  if(letter == "'"){
      flagAcute=true;
      return;
  }
  if(letter == "^"){
      flagGrave=true;
      return;
  }
  if(letter == "~"){
      flagTilde=true;
      return;
  }
  if(flagAcute==true){
    flagAcute=false;
    switch(letter.lowercase().c_str()[0]){
      case 'a':
        letter="á";
        break;
      case 'e':
        letter="é";
        break;
      case 'i':
        letter="í";
        break;
      case 'o':
        letter="ó";
        break;
      case 'u':
        letter="ú";
        break;
      default:
        letter="'"+letter;
    }
    if(isUpper){
        letter = letter.uppercase();
        m_signal_upper.emit();
        isUpper = !isUpper;
    }
  }
  if(flagGrave==true){
    flagGrave=false;
    switch(letter.lowercase().c_str()[0]){
      case 'a':
        letter="â";
        break;
      case 'e':
        letter="ê";
        break;
      case 'i':
        letter="î";
        break;
      case 'o':
        letter="ô";
        break;
      case 'u':
        letter="û";
        break;
      default:
        letter="^"+letter;
    }
    if(isUpper){
        letter.uppercase();
        m_signal_upper.emit();
        isUpper = !isUpper;
    }
  }
  if(flagTilde==true){
    flagTilde=false;
    switch(letter.lowercase().c_str()[0]){
      case 'a':
        letter="ã";
        break;
      case 'e':
        letter="ẽ";
        break;
      case 'i':
        letter="ĩ";
        break;
      case 'o':
        letter="õ";
        break;
      case 'u':
        letter="ũ";
        break;
      case 'n':
        letter="ñ";
        break;
      default:
        letter="~"+letter;
    }
    if(isUpper){
        letter.uppercase();
        m_signal_upper.emit();
        isUpper = !isUpper;
    }
  }
  if(isupper(letter.c_str()[0])){
    m_signal_upper.emit();
    isUpper = !isUpper;
  }
  m_signal_input.emit(letter);
}

Keyboard::type_signal_input Keyboard::signal_input(){
  return m_signal_input;
}

Keyboard::type_signal_upper Keyboard::signal_upper(){
  return m_signal_upper;
}

