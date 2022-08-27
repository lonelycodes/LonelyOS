// headers conveniently provided by GCC :)
// includes things like fixed width data types
#include <stddef.h>
#include <stdint.h>

// sanity checks ti make sure we use the right cross compiler
#if defined(__linux__)
#error "This code must be compiled with a cross-compiler"
#elif !defined(__i386__)
#error "This code must be compiled with an x86-elf compiler"
#endif

// the VGA textmode buffer address. write data to this location!
volatile uint16_t *vga_text_buf = (uint16_t *)0xB8000;
// default VGA textmode buffer size of 80x25 characters
const int VGA_COLS = 80;
const int VGA_ROWS = 25;

// text has 0-coordinates (0, 0) = top-left of screen.
int term_col = 0;
int term_row = 0;
// white text on black background like real hackers
uint8_t term_color = 0x0F;

// clear the terminal
void term_clear()
{
    for (int col = 0; col < VGA_COLS; col++)
    {
        for (int row = 0; row < VGA_ROWS; row++)
        {
            // index into VGA textmode buffer for our current character
            const size_t index = (VGA_COLS * row) + col;
            // entries in the VGA textmode buffer take the binary form BBBBFFFFCCCCCCCC, where:
            // - B is the background color
            // - F is the foreground color
            // - C is the ASCII character
            vga_text_buf[index] = ((uint16_t)term_color << 8) | ' '; // set current character to blank (a space character)
        }
    }
}

// put one character on the screen
void term_putc(char c)
{
    switch (c)
    {
    // newline sets col back to beginning and moves to next row
    case '\n':
    {
        term_col = 0;
        term_row++;
        break;
    }
    // normal character gets written to vga textmode buffer at current index
    default:
    {
        const size_t index = (VGA_COLS * term_row) + term_col;
        vga_text_buf[index] = ((uint16_t)term_color << 8) | c;
        term_col++;
        break;
    }
    }
    // handle last col -> move to beginning of next row
    if (term_col >= VGA_COLS)
    {
        term_col = 0;
        term_row++;
    }
    // handle last row -> move back to beginning col and reset row to 0
    if (term_row >= VGA_ROWS)
    {
        term_col = 0;
        term_row = 0;
    }
}

// write a whole string to the screen
void term_print(char *text)
{
    for (size_t i = 0; text[i] != '\0'; i++)
    {
        term_putc(text[i]);
    }
}

// the kernels main method which is called from our start.s assembly
void kmain()
{
    term_clear();
    term_print("Hello, world!\n");
}