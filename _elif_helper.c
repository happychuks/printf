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

	if (format == 'c')
	{
		char c = va_arg(args, int);

		printed_chars += print_char(c, pb);
	}
	else if (format == 's')
	{
		char *str = va_arg(args, char *);

		printed_chars += print_string(str, pb);
	}
	else if (format == 'd' || format == 'i')
	{
		int value = va_arg(args, int);

		printed_chars += print_integer(value, pb);
	}
	else if (format == 'b')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_binary(n, pb);
	}
	else if (format == '%')
	{
		printed_chars += print_percent(pb);
	}
	else if (format == 'u')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_unsigned_decimal(n, pb);
	}
	else if (format == 'o')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_octal(n, pb);
	}
	else if (format == 'p')
	{
        void *ptr = va_arg(args, void *);

        printed_chars += print_address((unsigned long)ptr, pb);
    }
    else if (format == 'x')
    {
        unsigned int n = va_arg(args, unsigned int);

        printed_chars += print_lowercase_hexadecimal(n, pb);
    }
    else if (format == 'X')
    {
        unsigned int n = va_arg(args, unsigned int);

        printed_chars += print_uppercase_hexadecimal(n, pb);
    }
	else
	{
		_putchar('%', pb);
		_putchar(format, pb);
		printed_chars += 2;
	}
	return (printed_chars);
}
