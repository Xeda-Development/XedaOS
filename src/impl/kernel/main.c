#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);

    print_str("Welcome!");
    print_newline();
    print_newline();
    print_str("Loading XedaOS...");
}