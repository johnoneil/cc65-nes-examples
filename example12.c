
#include "neslib.h"

#define PLAYER_INITIAL_X 32
#define PLAYER_INITIAL_Y 216

// Nametables have 30 rows and 32 columns
// This level data table is metatile oriened, and describes
// columns in consecutive memory addresses.
const unsigned char level_data[] = {
    // Screen 1
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 0
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 1
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 2
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 3
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 4
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 5
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 6
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 7
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, // <-- column 8
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, // <-- column 9
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, // <-- column 10
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, // <-- column 11
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, // <-- column 12
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, // <-- column 13
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, // <-- column 14
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, // <-- column 15

    // Screen 2
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 0
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 1
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 2
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 3
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 4
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 5
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 6
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 7
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 8
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 9
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 10
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 11
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 12
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 13
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 14
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 15

};

/*
    utility function that returns nonzero if we can enter pixel (i.e. "empty" in corresponding level data.)
    The level_x values are pixel locations in *level space* which starts at 0 at level start
    and increases per pixel to the right to the maximum (2^15).
    The level_y values are pixel locations in *level space* which starts at 0 at the top of the screen
    and increses to the bottom.
*/
unsigned char empty(int level_x, int level_y)
{
    static int row = 0;
    static int col = 0;
    // basic tests
    if(level_x < 0) return FALSE; // Can't go forever left
    //if(level_y > 216) return FALSE; // Can't go through the floor

    // All sorts of optimizations that can be done here
    // but for now I'm just checking the 4 corners of a given 8x8 sprite
    // regardless of whether the're in the same metatile or not.

    // UL
    col = level_y >> 4; // divide by 16 because metatiles are 16x16 pixels.
    row = level_x >> 4; // divide by 16 because metatiles are 16x16 pixels.
    if(level_data[row * 15 + col] != 0x0) return FALSE;
    // UR
    //col = level_y >> 4; // divide by 16 because metatiles are 16x16 pixels.
    row = level_x + 8 >> 4; // divide by 16 because metatiles are 16x16 pixels.
    if(level_data[row * 15 + col] != 0x0) return FALSE;
    // LL
    col = level_y + 8 >> 4; // divide by 16 because metatiles are 16x16 pixels.
    row = level_x >> 4; // divide by 16 because metatiles are 16x16 pixels.
    if(level_data[row * 15 + col] != 0x0) return FALSE;
    // LR
    //col = level_y >> 4; // divide by 16 because metatiles are 16x16 pixels.
    row = level_x + 8 >> 4; // divide by 16 because metatiles are 16x16 pixels.
    if(level_data[row * 15 + col] != 0x0) return FALSE;
    return TRUE;

}

static unsigned char update_list[3+32+3+8+1];//3 bytes address and length for 32 tiles, 3 bytes address and length for 8 attributes, end marker

const unsigned char palette[16]={ 0x0f,0x16,0x26,0x36,0x0f,0x18,0x28,0x38,0x0f,0x19,0x29,0x39,0x0f,0x1c,0x2c,0x3c };

//metatile palettes

#define BGPAL0	0x00	//bin 00000000
#define BGPAL1	0x55	//bin 01010101
#define BGPAL2	0xaa	//bin 10101010
#define BGPAL3	0xff	//bin 11111111

//metatile definitions, one metatmetatilesile by another, 4 bytes per metatile

const unsigned char metatiles[]={
    0x00,0x00,0x00,0x00,
    0x80,0x81,0x90,0x91,
    0x82,0x83,0x92,0x93,
    0x84,0x85,0x94,0x95,
    0x86,0x87,0x96,0x97
};

//metatile attributes, define which palette should be used for a metatile

const unsigned char metaattrs[]={
    BGPAL0,
    BGPAL0,
    BGPAL1,
    BGPAL2,
    BGPAL3
};

void fillColumn(unsigned char col, unsigned int level_col)
{
    static unsigned char i,current_metatile;
    static unsigned int name_adr,attr_adr;
    static unsigned char write_offset,read_offset, metatile_offset;
    static unsigned char nametable_col;

    nametable_col = col;
#if 1
	if(nametable_col < 32)//calculate tile and attribute row addresses in a nametable
	{   	
        name_adr = NAMETABLE_A + nametable_col;
		//attr_adr = NAMETABLE_A + 960 + ((name_row>>2)<<3);
	}
	else
	{
		nametable_col -= 32;
		name_adr = NAMETABLE_B + nametable_col;
		//attr_adr = NAMETABLE_C + 960 + ((name_row>>2)<<3);
	}
    metatile_offset = nametable_col & 0x1;
#else
    metatile_offset = nametable_col & 0x1;	
    name_adr=NAMETABLE_A+(nametable_col);
    #if 0
    attr_adr=NAMETABLE_A+960+((col>>2)<<1);
    #endif
#endif

    update_list[0] = MSB(name_adr)|NT_UPD_VERT;//set nametable update address
    update_list[1] = LSB(name_adr);
    update_list[2] = 32; // writing 32 tiles in column

    // 16 metatiles per column, writing 2 per metatile
    write_offset = 3;
    read_offset = 0;
    for(i=0; i<16; ++i)
    {
        current_metatile = level_data[((col>>1)*15) + read_offset];
        update_list[write_offset] = metatiles[4*current_metatile + metatile_offset];
        ++write_offset;
        update_list[write_offset] = metatiles[4*current_metatile + metatile_offset + 2];
        ++write_offset;
        if(write_offset & 0x1)
            ++read_offset;
    }
    update_list[35]=NT_UPD_EOF;

    #if 0
    update_list[35]=MSB(attr_adr)|NT_UPD_VERT;//set attribute table update address
    update_list[36]=LSB(attr_adr);
    #endif
    
    flush_vram_update(update_list);
}


void main(void)
{
    static unsigned char col;
    unsigned int level_pos = 0;
    static unsigned int level_y = 0;
    static int scroll_pos = 0;
    static unsigned char pad;
    // player position in level space.
    // Level space is described as 0 to 2^15 in the x direction (unsigned int).
    // This is in contrast to screen space which is 0 to 256 in the x direction.
    static int player_pos_x = PLAYER_INITIAL_X, player_pos_y = PLAYER_INITIAL_Y;
    static int player_v_x = 0, player_v_y = 0;
    static unsigned char screen_player_x = PLAYER_INITIAL_X, screen_player_y = PLAYER_INITIAL_Y;
    const static int g = -1;
    unsigned char delta = 0;
    static unsigned char b = 0, prev_b = 0, a = 0, prev_a = 0;
    static unsigned char debounced_a = 0, debounced_b = 0;
    //rendering is disabled at the startup, and palette is all black
    
    pal_bg(palette);//set background palette from an array
    pal_col(17,0x30);//white color for sprite

    update_list[0]=0x20|NT_UPD_HORZ;//horizontal update sequence, dummy address
    update_list[1]=0x00;
    update_list[2]=32;//length of nametable update sequence

    #if 0
    update_list[35]=0x20|NT_UPD_HORZ;
    update_list[36]=0x00;metatiles
    #else
    update_list[35]=NT_UPD_EOF;
    #endif

    // Fill the nametables with initial level data
    for(col = 0; col < 64; ++col)
        fillColumn(col, level_pos);
       
    ppu_on_all();//enable rendering

    while(1)
    {
        ppu_wait_nmi();

        set_vram_update(NULL);//disable update just in case, not really needed in this example

        // get player input, condition it
        pad = pad_poll(0);
        a = pad & PAD_A;
        debounced_a = (!prev_a) && a;
        prev_a = a;
        b = pad & PAD_B;
        debounced_b = (!prev_b) && b;
        prev_b = b;

        // Update player velocity from input
        if( pad & PAD_LEFT && player_pos_x > 0)
        {
            player_v_x = -1;
        }
        else if( pad & PAD_RIGHT )
        {
            player_v_x = 1;
        }
        if( player_v_y == 0 && debounced_b)
        {
            player_v_y = 15; // jump upwards at rate of 8 pixels/frame. Makes sure we can't go through metatiles.
        }

        // Correct player velocity when hitting obstacles
        if(empty(player_pos_x + player_v_x, player_pos_y))
        {
            player_pos_x += player_v_x;
        }
        player_v_x = 0;
        // subtract player_v_y here to keep y velocities upwards positive
        // Update v_y due to gravity
        player_v_y += g;
        if(empty(player_pos_x, player_pos_y - player_v_y))
        {
            player_pos_y -= player_v_y;
        }else{
            player_v_y = 0;
        }

        // Translate player level space position to screen space and scroll
        screen_player_x = player_pos_x;
        screen_player_y = player_pos_y;
        
        oam_spr(screen_player_x, screen_player_y, 0x1 ,0,0);//display sprite

        scroll(scroll_pos, 0);//scroll value will be applied on the next nmi as well
    }
}
