#include <gb/gb.h>
#include "tiles/tiles.c"
#include "tiles/mapTiles.c"

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
  set_bkg_data(0, 4, tiles);
  set_bkg_tiles(2,6,1,1,tilebk);
}

void uswitch() {
  HIDE_WIN;
  SHOW_SPRITES;
  SHOW_BKG;
}
