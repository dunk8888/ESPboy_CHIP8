//CHIP8 small 8x5 font
static const uint8_t PROGMEM fontchip[16 * 5] = {
 //0
  0b11110000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11110000,
//1
  0b00100000,
  0b01100000,
  0b00100000,
  0b00100000,
  0b01110000,
//2
  0b11110000,
  0b00010000,
  0b11110000,
  0b10000000,
  0b11110000,
//3
  0b11110000,
  0b00010000,
  0b11110000,
  0b00010000,
  0b11110000,
//4
  0b10010000,
  0b10010000,
  0b11110000,
  0b00010000,
  0b00010000,
//5
  0b11110000,
  0b10000000,
  0b11110000,
  0b00010000,
  0b11110000,
//6
  0b11110000,
  0b10000000,
  0b11110000,
  0b10010000,
  0b11110000,
//7
  0b11110000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b01000000,
//8
  0b11110000,
  0b10010000,
  0b11110000,
  0b10010000,
  0b11110000,
//9
  0b11110000,
  0b10010000,
  0b11110000,
  0b00010000,
  0b11110000,
//A
  0b11110000,
  0b10010000,
  0b11110000,
  0b10010000,
  0b10010000,
//B
  0b11100000,
  0b10010000,
  0b11100000,
  0b10010000,
  0b11100000,
//C
  0b11110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11110000,
//D
  0b11100000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11100000,
//E
  0b11110000,
  0b10000000,
  0b11110000,
  0b10000000,
  0b11110000,
//F
  0b11110000,
  0b10000000,
  0b11110000,
  0b10000000,
  0b10000000,
};

//Super Chip large 8x10 font
static const uint8_t PROGMEM fontschip[16 * 10] = {
//0
  0b00000000,
  0b00111100,
  0b01000010,
  0b01000010,
  0b01000010,
  0b01000010,
  0b01000010,
  0b01000010,
  0b00111100,
  0b00000000,
//1
  0b00000000,
  0b00001000,
  0b00111000,
  0b00001000,
  0b00001000,
  0b00001000,
  0b00001000,
  0b00001000,
  0b00111110,
  0b00000000,
//2
  0b00000000,
  0b00111000,
  0b01000100,
  0b00000100,
  0b00001000,
  0b00010000,
  0b00100000,
  0b01000100,
  0b01111100,
  0b00000000,
//3
  0b00000000,
  0b00111000,
  0b01000100,
  0b00000100,
  0b00011000,
  0b00000100,
  0b00000100,
  0b01000100,
  0b00111000,
  0b00000000,
//4
  0b00000000,
  0b00001100,
  0b00010100,
  0b00100100,
  0b00100100,
  0b01111110,
  0b00000100,
  0b00000100,
  0b00001110,
  0b00000000,
//5
  0b00000000,
  0b00111110,
  0b00100000,
  0b00100000,
  0b00111100,
  0b00000010,
  0b00000010,
  0b01000010,
  0b00111100,
  0b00000000,
//6
  0b00000000,
  0b00001110,
  0b00010000,
  0b00100000,
  0b00111100,
  0b00100010,
  0b00100010,
  0b00100010,
  0b00011100,
  0b00000000,
//7
  0b00000000,
  0b01111110,
  0b01000010,
  0b00000010,
  0b00000100,
  0b00000100,
  0b00001000,
  0b00001000,
  0b00001000,
  0b00000000,
//8
  0b00000000,
  0b00111100,
  0b01000010,
  0b01000010,
  0b00111100,
  0b01000010,
  0b01000010,
  0b01000010,
  0b00111100,
  0b00000000,
//9
  0b00000000,
  0b00111100,
  0b01000010,
  0b01000010,
  0b01000010,
  0b00111110,
  0b00000010,
  0b00000100,
  0b01111000,
  0b00000000,
//A
  0b00000000,
  0b00011000,
  0b00001000,
  0b00010100,
  0b00010100,
  0b00010100,
  0b00011100,
  0b00100010,
  0b01110111,
  0b00000000,
//B
  0b00000000,
  0b01111100,
  0b00100010,
  0b00100010,
  0b00111100,
  0b00100010,
  0b00100010,
  0b00100010,
  0b01111100,
  0b00000000,
//C
  0b00000000,
  0b00011110,
  0b00100010,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00100010,
  0b00011100,
  0b00000000,
//D
  0b00000000,
  0b01111000,
  0b00100100,
  0b00100010,
  0b00100010,
  0b00100010,
  0b00100010,
  0b00100100,
  0b01111000,
  0b00000000,
//E
  0b00000000,
  0b01111110,
  0b00100010,
  0b00101000,
  0b00111000,
  0b00101000,
  0b00100000,
  0b00100010,
  0b01111110,
  0b00000000,
//F
  0b00000000,
  0b01111110,
  0b00100010,
  0b00101000,
  0b00111000,
  0b00101000,
  0b00100000,
  0b00100000,
  0b01110000,
  0b00000000,
 };