#include "main.h"

/**
 * print_from_to - prints a range of char addresses
 * @start: starting address
 * @stop: stopping address
 * @except: except address
 *
 * Return: number bytes printed
 */

int print_from_to(char *start, char *stop, char *except)
{
	int printed_chars = 0;

	while (start <= stop)
	{
		if (start != except)
			printed_chars += _putchar(*start);
		start++;
	}
	return (printed_chars);
}
