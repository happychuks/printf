#include "main.h"

/**
 * print_address - prints address
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_address(va_list ap, params_t *params)
{
	unsigned long int n = va_arg(ap, unsigned long int);
	char *str;

	if (!n)
		return (_puts("(nil)"));

	str = convert(n, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	*--str = 'x';
	*--str = '0';
	return (print_number(str, params));
}
