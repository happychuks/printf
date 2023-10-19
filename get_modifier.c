#include "main.h"

/**
 * get_modifier - finds the modifier function
 * @s: string for format
 * @params: parameter structure
 * Return: if modifier was valid
 */

int get_modifier(char *s, params_t *params)
{
	int printed_chars = 0;

	switch (*s)
	{
		case 'h':
			printed_chars = params->h_modifier = 1;
			break;
		case 'l':
			printed_chars = params->l_modifier = 1;
			break;
	}
	return (printed_chars);
}
