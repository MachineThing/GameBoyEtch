#include <gb/gb.h>

void init();
void uswitch();

void main() {
  init();
  while(1) {
    uswitch();
    wait_vbl_done();
  }
}

void init() {
  DISPLAY_ON;
}

void uswitch() {
  HIDE_WIN;
  SHOW_SPRITES;
  SHOW_BKG;
}
