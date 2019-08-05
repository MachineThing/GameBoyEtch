#include <gb/gb.h>
#include "tiles/tiles.c"
#include "tiles/mapTiles.c"

void init();
void uswitch();
void getinput();

void main() {
  init();
  while(1) {
    /*
    9 = middle X coord
    19 = max X coord
    8 = middle Y coord
    17 = max Y coord
    */
    uswitch();
    wait_vbl_done();
  }
}

void init() {
  DISPLAY_ON;
  set_bkg_data(0, 4, tiles);
  set_bkg_tiles(9,8,1,1,tilelg);
}

void uswitch() {
  HIDE_WIN;
  SHOW_SPRITES;
  SHOW_BKG;
}

void getinput() {

  if (joypad() & J_B) {
  // The B button was pressed!
  } else if (joypad() & J_UP) {
    // The UP button was pressed!
  } else if (joypad() & J_DOWN) {
    // The DOWN button was pressed!
  } else if (joypad() & J_LEFT) {
    // The LEFT button was pressed!
  } else if (joypad() & J_RIGHT) {
    // The RIGHT button was pressed!
  }

}
