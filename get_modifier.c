#include "main.h"

/**
 * get_modifier - finds the modifier function
 * @s: string for format
 * @params: parameter structure
 * Return: if modifier was valid
 */

int get_modifier(char *s, params_t *params)
{
	int i = 0;

	switch (*s)
	{
		case 'h':
			i = params->h_modifier = 1;
			break;
		case 'l':
			i = params->l_modifier = 1;
			break;
	}
	return (i);
}
