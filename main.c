#include <gb/gb.h>
#include "collision.h"
#include "tiles/placeholder.h"
#include "tiles/placeholdermap.h"
#include "sprites/placeholdersprite.h"

int x = 1;
int y = 14;
int frame = 0;
int col = 0;
int height = 18;
int width = 32;
int hex[] = {0, 1};

UBYTE keypress;

int main() {
    SPRITES_8x16;

    set_sprite_data(0, 8, placeholdersprite);
    set_sprite_tile(0, 0);
    move_sprite(0, x * 8, y * 8);

    SHOW_SPRITES;

    set_bkg_data(0, 3, placeholder);
    set_bkg_tiles(0, 0, width, height, placeholdermap);

    SHOW_BKG;
    DISPLAY_ON;

    while(1){
        keypress = joypad();

        frame += 1;

        if(frame > 255) {
            frame = 0;
        }

        if(frame == 200) {
            col = check_col(placeholdermap, 2, hex, x, y + 1, width);
            if(col == 0) {
                y += 1;
                if(y > 18) {
                    y = 14;
                }
            }
        }
        if(frame == 100) {
            col = check_col(placeholdermap, 2, hex, x, y, width);
            if(col == 0) {
                if(keypress == J_RIGHT) {
                    x += 1;
                }
            }
            col = check_col(placeholdermap, 2, hex, x - 1, y, width);
            if(col == 0) {
                if(keypress == J_LEFT) {
                    x -= 1;
                }
            }
        }

        move_sprite(0, x * 8, y * 8);

    }
}
