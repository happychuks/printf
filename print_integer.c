#include "main.h"

/**
 * print_integer - Print an integer
 * @args: The argument list
 * Return: The number of characters printed
 */
int print_integer(va_list args)
{
	int value;
	/* Extract an integer argument from the va_list named 'args' */
	value = va_arg(args, int);

	if (value < 0)
	{
		_putchar('-');  /* Print the negative sign */
		return (1 + print_int_base((unsigned int)(-value), 10, 0));
		/* Print the absolute value and return the number of characters printed */
	}

	/* If the value is non-negative, simply print it in base 10 */
	return (print_int_base((unsigned int)value, 10, 0));
	/* Print the value and return the number of characters printed */
}
