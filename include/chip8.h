#ifndef CHIP8_H
#define CHIP8_H

#include <stdint.h>

#define MEMORY_SIZE 4096
#define START_ADDRESS 0x200
#define MAX_ROM_SIZE (MEMORY_SIZE - START_ADDRESS)

typedef struct Chip8 {
    uint8_t memory[MEMORY_SIZE];
    uint8_t display[32][64];
    uint16_t PC;
    uint16_t I;
    uint16_t stack[16];
    uint8_t SP;
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint8_t V[16];
} Chip8;

void chip8_init(Chip8 *chip8);

void chip8_load_rom(Chip8 *chip8);

#endif // !CHIP8_H
