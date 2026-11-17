#ifndef CHIP8_H
#define CHIP8_H

#include <stdbool.h>
#include <stdint.h>

#define MEMORY_SIZE 4096
#define START_ADDRESS 0x200
#define MAX_ROM_SIZE (MEMORY_SIZE - START_ADDRESS)
#define DISPLAY_WIDTH 64
#define DISPLAY_HEIGHT 32
#define STACK_SIZE 16

typedef struct Chip8 {
    uint8_t memory[MEMORY_SIZE];
    uint8_t display[DISPLAY_HEIGHT][DISPLAY_WIDTH];
    uint16_t PC;
    uint16_t I;
    uint16_t stack[STACK_SIZE];
    uint8_t SP;
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint8_t V[16];
} Chip8;

void chip8_init(Chip8 *chip8);

bool chip8_load_rom(Chip8 *chip8, const char *file);

#endif // !CHIP8_H
