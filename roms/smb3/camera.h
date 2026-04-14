#pragma once

#include <stdint.h>

enum camera_mode {
    AXIS = 1,
    DIRECTION = 1 << 1,
    AUTOSCROLL = 1 << 2,
};

struct camera_guide {
    uint16_t loc;
    enum camera_mode mode;
};

void camera_reset_pos(uint16_t y, uint16_t x);
void camera_move(uint16_t y, uint16_t x);
void camera_set_guides(struct camera_guide *guide);
