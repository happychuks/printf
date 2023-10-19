#include "main.h"

/**
 * get_print_func - finds the function
 * related to the format
 * @s: string of the format
 * @ap: argument pointer
 * @params: the parameters struct
 * Return: the number of bytes printed
 */

int get_print_func(char *s, va_list ap, params_t *params)
{
	int (*f)(va_list, params_t *) = get_specifier(s);

	if (f)
		return (f(ap, params));
	return (0);
}
