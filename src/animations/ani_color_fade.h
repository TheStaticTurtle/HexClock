#ifndef HEXCLOCK_ANI_COLOR_FADE_H
#define HEXCLOCK_ANI_COLOR_FADE_H

#include "ani_common.h"

class ani_color_fade {
    public:
        ani_color_fade(byte brghtness);
        void run(CRGB* buffer);
        void set_speed(byte speed);

    private:
        float current_hue = 0.0;
        byte step_speed = 100;
        byte brightness = 100;
};


#endif //HEXCLOCK_ANI_COLOR_FADE_H
