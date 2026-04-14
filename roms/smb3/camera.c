#include "camera.h"

uint16_t camera_x;
uint16_t camera_y;
uint16_t guide_counter;
struct camera_guide *guide;

void camera_reset_pos(uint16_t y, uint16_t x) {
    camera_y = y;
    camera_x = x;
}

void camera_set_guides(struct camera_guide *g) { guide = g; }

void camera_increment_guide(int8_t direction) { guide_counter += direction; }

void camera_get_pos() {
    struct camera_guide *g = &guide[guide_counter];
    uint16_t len = g->mode & AXIS ? camera_x : camera_y;
    if (len > g->loc) {
    }
    // switch (g->mode) {
    // case FLIP_X:
    // case FLIP_Y:
    // case AUTOSCROLL:
    //     break;
    // }
}

void camera_move(uint16_t y, uint16_t x) {
    camera_y += y;
    camera_x += x;
}
