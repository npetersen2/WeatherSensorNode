#include "Arduino.h"
#include "KY040.h"

KY040::KY040(int clk_pin, int dt_pin, int sw_pin, long button_long_press_duration) {
  this->_pin_clk = clk_pin;
  this->_pin_dt = dt_pin;
  this->_pin_sw = sw_pin;

  pinMode(_pin_clk, INPUT);
  pinMode(_pin_dt, INPUT);
  pinMode(_pin_sw, INPUT_PULLUP);

  this->_button_long_press_duration = button_long_press_duration;

  this->_encoder_pos = 0;

  this->_button_state = false;
  this->_button_prev_state = false;
  
  this->_button_time_last_press_start = 0;

  this->_button_long_pressed = false;
  this->_button_unique_pressed = false;

  this->_button_force_false = false;
}

KY040::~KY040() {
  pinMode(_pin_clk, OUTPUT);
  pinMode(_pin_dt, OUTPUT);
  pinMode(_pin_sw, OUTPUT);  
}

void KY040::setLongPressDuration(long button_long_press_duration) {
  _button_long_press_duration = button_long_press_duration;
}

void KY040::interrupt() {
  boolean up;
  if (digitalRead(_pin_clk)) {
    up = !digitalRead(_pin_dt);
  } else {
    up = digitalRead(_pin_dt);
  }

  if (up) {
    _encoder_pos++;
  } else {
    _encoder_pos--;
  }
}

void KY040::tick() {
  delay(5); // DEBOUNCE!!!
  
  // get the current button state
  _button_state = !digitalRead(_pin_sw);

  // button was just pressed and we were forcing false
  if (_button_force_false && _button_state && !_button_prev_state) {
    _button_force_false = false;
  }

  // button JUST released
  _button_unique_pressed = !_button_state && _button_prev_state;

  // remember time if button JUST pressed
  if (_button_state && !_button_prev_state) _button_time_last_press_start = millis();
  
  // button has been held for minimum of 2000 milliseconds
  _button_long_pressed = millis() - _button_time_last_press_start > _button_long_press_duration
                          && _button_state;

  // remember the prev state
  _button_prev_state = _button_state;
}

bool KY040::isPressed() {
  return _button_state && !_button_force_false;
}

bool KY040::wasPressed() {
  return _button_prev_state && !_button_force_false;
}

bool KY040::isLongPressed() {
  if (_button_force_false) {
    return false;
  } else {
    _button_force_false = _button_long_pressed;
    return _button_long_pressed;
  }
}

bool KY040::isUniquePressed() {
  return _button_unique_pressed && !_button_force_false;
}

int KY040::getPosition() {
  return _encoder_pos;
}

void KY040::reset() {
  _encoder_pos = 0;
}

