#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return:( str-a)
 */
int _puts(char *str)
{
	char *a = str;/*declaration of variables*/

	while (*str)
		_putchar(*str++);
	return (str - a);
}
