#include "main.h"

/**
 * print_char - Print a character
 * @args: Arguments from va_list
 * Return: The number of characters printed
 */

int print_char(va_list args)
{
	/* Retrieve the character argument from va_list*/
	char c = va_arg(args, int);

	/*Cal _putchar to print the character*/
	_putchar(c);

	/*Return 1, indicating that one character was printed*/
	return (1);
}
