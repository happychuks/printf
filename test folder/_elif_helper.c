#include "main.h"

/**
 * _elif_helper - Helper function for handling format specifiers in _elif
 * @format: The format character to handle
 * @args: The va_list containing the arguments
 * Return: The number of characters printed
 */

int _elif_helper(char format, va_list args)
{
	switch (format)
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_string(args));
		default:
			_putchar('%');
			_putchar(format);
			return (2);
	}
}
