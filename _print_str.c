#include "main.h"

/**
 * _print_str - Print a string to the stdout
 * @str: The input string to be printed
 * Description - This function takes an input string and prints it to stdout.
 * It counts the number of characters printed and returns that count.
 *
 * Return: The number of characters printed to the stdout.
 */

int _print_str(char *str)
{
	/*Counter for the number of characters printed.*/
	int count = 0;

	/*Iterate through the input string while it is true*/
	while (*str)
	{/*After printing the current character move to the next*/
		_putchar(*str++);
		count++;
	}

	return (count);
}
