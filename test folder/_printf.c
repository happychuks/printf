#include "main.h"

/**
 * _printf - The main custom printf function that formats and prints arguments
 * @format: The format string specified in the arguments
 *
 * This function processes arguments and throws them to the stdout
 *
 * @format: The format string is a character that holdhe specifier with a 
 * '%' character, and followed by a specific conversion character
 * (e.g., %s for strings, %i for integers)
 *
 * Return: The number of characters printed to the stdout.
 */

int _printf(const char *format, ...)
{
	/* Number of characters printed to the standard output. */
	int printed_chars;

	/*A list of variable arguments. */
	va_list args;

	/*Start processing variable arguments.*/
	va_start(args, format);
	printed_chars = 0;

	/*Process teh format string and arguments.*/
	printed_chars = _elif(format, args);

	/*End processing variable arguments.*/
	va_end(args);

	return (printed_chars);
}
