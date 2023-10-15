#include "main.h"

/**
 * _putchar - Print a character to the stdout.
 * @c: The input character to be written
 *
 * This function uses write to output a single character
 * to the standard output.
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned.
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
