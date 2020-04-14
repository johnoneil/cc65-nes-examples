
#include "neslib.h"

const unsigned char level_data[] = {
    // Screen 1
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 0
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 1
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 2
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 3
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 4
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 5
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 6
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 7
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 8
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 9
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 10
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, // <-- column 11
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 12
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 13
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 14
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, // <-- column 15

    // Screen 2
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 0
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 1
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 2
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 3
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 4
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 5
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 6
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 7
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 8
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 9
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 10
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, // <-- column 11
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 12
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 13
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 14
    0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x2, // <-- column 15

};

static unsigned char update_list[3+32+3+8+1];//3 bytes address and length for 32 tiles, 3 bytes address and length for 8 attributes, end marker

const unsigned char palette[16]={ 0x0f,0x16,0x26,0x36,0x0f,0x18,0x28,0x38,0x0f,0x19,0x29,0x39,0x0f,0x1c,0x2c,0x3c };

//metatile palettes

#define BGPAL0	0x00	//bin 00000000
#define BGPAL1	0x55	//bin 01010101
#define BGPAL2	0xaa	//bin 10101010
#define BGPAL3	0xff	//bin 11111111

//metatile definitions, one metatmetatilesile by another, 4 bytes per metatile

#if 0
const unsigned char metatiles[]={
    0x00,0x00,0x00,0x00,
    0x80,0x81,0x90,0x91,
    0x82,0x83,0x92,0x93,
    0x84,0x85,0x94,0x95,
    0x86,0x87,0x96,0x97
};
#else
const unsigned char metatiles[]={
    0x00,0x00,0x00,0x00,
    0x80,0x81,0x90,0x91, // 0x80 = UL, 0x81 = UR 0x90 = LL, 0X91 = LR
    0x82,0x83,0x92,0x93,
    0x84,0x85,0x94,0x95,
    0x86,0x87,0x96,0x97
};
#endif

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
	if(nametable_col < 30)//calculate tile and attribute row addresses in a nametable
	{   	
        name_adr = NAMETABLE_A + nametable_col;
		//attr_adr = NAMETABLE_A + 960 + ((name_row>>2)<<3);
	}
	else
	{
		nametable_col -= 30;
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
        current_metatile = level_data[((col>>1)<<4) + read_offset];
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
    //rendering is disabled at the startup, and palette is all black
    
    pal_bg(palette);//set background palette from an array

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
    for(col = 0; col < 60; ++col)
        fillColumn(col, level_pos);
       
    ppu_on_all();//enable rendering

    while(1)
    {
        ppu_wait_nmi();

        set_vram_update(NULL);//disable update just in case, not really needed in this example

        #if 0
        if(!(level_y&7))//put new row every 8 pixels
        {
            name_row=(scroll_y>>3)+59;//update row just above the visible part of the screen

            if(name_row>=60) name_row-=60;//keep the row number within the limits

            prepare_row_update(name_row,level_y>>4);

            set_vram_update(update_list);//the update is handled at next NMI
        }
        #endif

        scroll(scroll_pos, 0);//scroll value will be applied on the next nmi as well
        ++scroll_pos;
        #if 0

        if(level_y>=LEVEL_HEIGHT) level_y=0;//loop the level

        --scroll_y;

        if(scroll_y<0) scroll_y=240*2-1;//keep Y within the total height of two nametables
        #endif

        #if 0
		pad=pad_poll(0);//move the sprite around

		if(pad&PAD_LEFT)  if(sprite_x>4)   sprite_x-=2;
		if(pad&PAD_RIGHT) if(sprite_x<252) sprite_x+=2;
		if(pad&PAD_UP)    if(sprite_y>4)   sprite_y-=2;
		if(pad&PAD_DOWN)  if(sprite_y<236) sprite_y+=2;
        #endif
    }
}
