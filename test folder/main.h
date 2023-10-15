#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - Header file for custom printf functions
 *
 * This header file contains function prototypes
 * and necessary invludes for the _printf function
 *
 * Created by a combined effort from Happy & Adioz
 */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

char _putchar(char c);
int _printf(const char *str, ...);
int print_char(va_list args);
int print_string(va_list args);


/*
 * Helper Functions
 */
int _elif(const char *format, va_list args);
int _elif_helper(char format, va_list args);
int _print_str(char *str);

#endif /* MAIN_H */
