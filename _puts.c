#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string input
 * Return: a printed string minus the newline
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}
