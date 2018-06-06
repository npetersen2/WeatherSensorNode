#include "Arduino.h"
#include "KY040.h"

KY040::KY040(int clk_pin, int dt_pin, int sw_pin) {
  pinMode(clk_pin, INPUT);
  pinMode(dt_pin, INPUT);
  pinMode(sw_pin, INPUT_PULLUP);

  this->_pos = 0;
}

KY040::~KY040() {
  //pinMode(_pin_clk, OUTPUT);
  //pinMode(_pin_dt, OUTPUT);
  //pinMode(_pin_sw, OUTPUT);  
}

// small, light and fast interrupt...
void KY040::interrupt() {


//  static int8_t enc_states[] = {0,-1,1,0,1,0,0,-1,-1,0,0,1,0,1,-1,0};
//  static uint8_t old_AB = 0;
//  /**/
//  old_AB <<= 2;                   //remember previous state
//  old_AB |= ( ENC_PORT & 0x03 );  //add current state
//  return ( enc_states[( old_AB & 0x0f )]);
}

void KY040::tick() {
}

bool KY040::isPressed() {
  return false;
}

bool KY040::wasPressed() {
  return false;
}

bool KY040::isLongPressed() {
  return false;
}

bool KY040::isUniquePressed() {
  return false;
}

int KY040::getPosition() {
  return _pos;
}

void KY040::reset() {
  _pos = 0;
}

