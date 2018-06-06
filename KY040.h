#ifndef KY040_H
#define KY040_H

class KY040 {
public:
    KY040(int clk_pin, int dt_pin, int sw_pin);
    ~KY040();
    
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
    int _pos;
};


#endif // KY040_H
