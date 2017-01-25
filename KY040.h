#pragma once

class KY040 {
  public:
    KY040(int, int, int, long = 500);
    ~KY040();

    void setLongPressDuration(long);
    
    // listen and update button states
    void tick();
    
    // access the button's value
    bool isPressed();
    bool wasPressed();
    bool isLongPressed();
    bool isUniquePressed();

    // access the encoder's value
    int getPosition();
    void reset();
    void interrupt(); // call from interrupt routine for tracking encoder position

  private:
    int _pin_clk;
    int _pin_dt;
    int _pin_sw;

    int _encoder_pos;

    long _button_long_press_duration;

    bool _button_state;
    bool _button_prev_state;

    bool _button_long_pressed;
    bool _button_unique_pressed;
    
    long _button_time_last_press_start;

    bool _button_force_false;
};

