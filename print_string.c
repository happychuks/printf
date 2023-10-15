#include "main.h"

/**
 * print_string - Print a string
 * @args: The input string
 * Return: The number of characters printed
 */

int print_string(va_list args)
{
	/*Extract a string argument from teh va_list names args*/
	char *str = va_arg(args, char *);

	/*
	 * Calls _print_str function to print the string
	 * and return the number of characters printed
	 */
	return (_print_str(str));
}
