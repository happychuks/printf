#include "main.h"

/**
 * print_S - custom format specifier
 * @ap: argument pointer
 * @params: the parameters struct
 * Return: printed characters
 */

int print_S(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *);
	char *hex;
	int printed_chars = 0;

	if ((int)(!str))
		return (_puts(NULL_STRING));
	for (; *str; str++)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			printed_chars += _putchar('\\');
			printed_chars += _putchar('x');
			hex = convert(*str, 16, 0, params);
			if (!hex[1])
				printed_chars += _putchar('0');
			printed_chars += _puts(hex);
		}
		else
		{
			printed_chars += _putchar(*str);
		}
	}
	return (printed_chars);
}
