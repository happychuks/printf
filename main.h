#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - Header file for custom printf functions
 *
 * This header file contains function prototypes
 * and necessary includes for the _printf function
 *
 * Created by a combined effort from Happy & Adioz
 */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/*
 * _putchar - Writes a character to the standard output.
 *
 * @c: character to be printed or type char.
 * Return: On SUccess, the character is printed.
 * This function writes a single character to the stdout.
 */
char _putchar(char c);

int _printf(const char *str, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int print_int_base(unsigned int n, int base, int _case);


/*
 * Helper Functions
 */
int _elif(const char *format, va_list args);
int _elif_helper(char format, va_list args);
int _print_str(char *str);

#endif /* MAIN_H */
