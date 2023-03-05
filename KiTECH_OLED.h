#ifndef KiTECH_OLED_h
#define KiTECH_OLED_h

#include "Arduino.h"

class KiTECH_OLED
{
private:

public:
    KiTECH_OLED();
    bool setup();
    void print(String text);
    void print_at(int x, int y, String text);
    void set_cursor(int x, int y);
    void clear();
    void set_text_size(int s);
    void draw_error(int x, int y)
};

#endif
