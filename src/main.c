#include <gb/gb.h>
#include "tiles/tiles.c"
#include "tiles/mapTiles.c"

void init();
void uswitch();
void getinput();

UINT8 player[2]; // Player pos
UINT8 delnum = 150; // Delay length

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
    getinput();
    set_bkg_tiles(player[0],player[1],1,1,tilebk);
    wait_vbl_done();
  }
}

void init() {
  DISPLAY_ON;
  set_bkg_data(0, 4, tiles);
  player[0] = 9; // X
  player[1] = 8; // Y
}

void uswitch() {
  HIDE_WIN;
  SHOW_SPRITES;
  SHOW_BKG;
}

void getinput() {

  if (joypad() & J_B) {
    set_bkg_tiles(0,0,20,18,refreshScr);
  } else if (joypad() & J_UP) {
    if(player[1] > 0) {
      set_bkg_tiles(player[0],player[1],1,1,tiledg);
      player[1]--; // Y+
      set_bkg_tiles(player[0],player[1],1,1,tilebk);
      delay(delnum);
    }
  } else if (joypad() & J_DOWN) {
    if(player[1] < 17) {
      set_bkg_tiles(player[0],player[1],1,1,tiledg);
      player[1]++; // Y-
      set_bkg_tiles(player[0],player[1],1,1,tilebk);
      delay(delnum);
    }
  } else if (joypad() & J_LEFT) {
    if(player[0] > 0) {
      set_bkg_tiles(player[0],player[1],1,1,tiledg);
      player[0]--; // X+
      set_bkg_tiles(player[0],player[1],1,1,tilebk);
      delay(delnum);
    }
  } else if (joypad() & J_RIGHT) {
    if(player[0] < 19) {
      set_bkg_tiles(player[0],player[1],1,1,tiledg);
      player[0]++; // X+
      set_bkg_tiles(player[0],player[1],1,1,tilebk);
      delay(delnum);
    }

  }

}
