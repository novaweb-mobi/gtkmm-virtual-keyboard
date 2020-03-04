#include "numerickeyboard.h"

NumericKeyboard::NumericKeyboard():Gtk::Grid(){
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

void NumericKeyboard::connectSignals(){

  Button_0->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_1->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_2->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_3->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_4->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_5->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_6->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_7->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_8->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  Button_9->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
  backspaceButton->signal_keypress().connect(sigc::mem_fun(this,
	  &NumericKeyboard::onKeyPress) );
  irButton->signal_keypress().connect(sigc::mem_fun(this,
        &NumericKeyboard::onKeyPress) );
}

void NumericKeyboard::createButtons(){

   Button_0 = new KeyboardButton("0");

   Button_1 = new KeyboardButton("1");

   Button_2 = new KeyboardButton("2");

   Button_3 = new KeyboardButton("3");

   Button_4 = new KeyboardButton("4");

   Button_5 = new KeyboardButton("5");

   Button_6 = new KeyboardButton("6");

   Button_7 = new KeyboardButton("7");

   Button_8 = new KeyboardButton("8");

   Button_9 = new KeyboardButton("9");

   backspaceButton = new KeyboardButton("\u2190");

   irButton = new KeyboardButton("\u2192");
}

void NumericKeyboard::buildLayout(){

  attach(*Button_0,1,4);

  attach(*Button_1,0,0);

  attach(*Button_2,1,0);

  attach(*Button_3,2,0);

  attach(*Button_4,0,1);

  attach(*Button_5,1,1);

  attach(*Button_6,2,1);

  attach(*Button_7,0,2);

  attach(*Button_8,1,2);

  attach(*Button_9,2,3);

  attach(*irButton,2,4);

  attach(*backspaceButton,0,4);
}
