#include "main.h"
/**
 * print_string - prints string
 * @ap: argument pointer
 * @params: the parameters struct
 * Return: number chars printed
 */
int print_string(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *), pad_char = ' ';
	unsigned int pad = 0, printed_chars = 0, i = 0, j;

	(void)params;
	switch ((int)(!str))
		case 1:
			str = NULL_STRING;
	j = pad = _strlen(str);
	if (params->precision < pad)
		j = pad = params->precision;
	if (params->minus_flag)
	{
		if (params->precision != UINT_MAX)
			for (i = 0; i < pad; i++)
				printed_chars += _putchar(*str++);
		else
			printed_chars += _puts(str);
	}
	while (j++ < params->width)
		printed_chars += _putchar(pad_char);
	if (!params->minus_flag)
	{
		if (params->precision != UINT_MAX)
			for (i = 0; i < pad; i++)
				printed_chars += _putchar(*str++);
		else
			printed_chars += _puts(str);
	}
	return (printed_chars);
}
