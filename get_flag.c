#include "main.h"
/**
 * get_flag - finds the flag functions
 * @s: the format string
 * @params: the parameters struct
 * Return: if flag was valid
 */

int get_flag(char *s, params_t *params)

{
	int printed_chars = 0;

	if (!*s)
	{
		return (1);
	}
	else if (*s == '+')
	{
		return (printed_chars = params->plus_flag = 1);
	}
	else if (*s == ' ')
	{
		return (printed_chars = params->space_flag = 1);
	}
	else if (*s == '#')
	{
		return (printed_chars = params->hashtag_flag = 1);
	}
	else if (*s == '-')
	{
		return (printed_chars = params->minus_flag = 1);
	}
	else if (*s == '0')
	{
		return (printed_chars = params->zero_flag = 1);
	}
	return (printed_chars);
}
