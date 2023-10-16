#include "main.h"
/**
 * _elif_helper - Helper function for handling format specifiers in _elif
 * @format: The format character to handle
 * @args: The va_list containing the arguments
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int _elif_helper(char format, va_list args, struct PrintBuffer *pb)
{
	int printed_chars = 0;

	switch (format)
	{
		case 'c':
		{
			char c = va_arg(args, int);

			printed_chars += print_char(c, pb);
			break;
		}
		case 's':
		{
			char *str = va_arg(args, char *);

			printed_chars += print_string(str, pb);
			break;
		}
		case 'd':
		case 'i':
		{
			int value = va_arg(args, int);

			printed_chars += print_integer(value, pb);
			break;
		}
		case 'b': /* Handle binary conversion */
		{
			unsigned int n = va_arg(args, unsigned int);

			printed_chars += print_binary(n, pb);
			break;
		}
		case '%':
		{
			_putchar('%', pb);
			break;
		}
		default:
		{
			_putchar('%', pb);
			_putchar(format, pb);
			printed_chars += 2;
			break;
		}
	}
	return (printed_chars);
}
