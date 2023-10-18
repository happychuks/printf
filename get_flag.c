#include "main.h"

/**
 * get_flag - finds the flag functions
 * @s: the format string
 * @params: the parameters struct
 * Return: if flag was valid
 */

int get_flag(char *s, params_t *params)

{
	int i = 0;

	switch (*s)
	{
		case '+':
			i = params->plus_flag = 1;
			break;
		case ' ':
			i = params->space_flag = 1;
			break;
		case '#':
			i = params->hashtag_flag = 1;
			break;
		case '-':
			i = params->minus_flag = 1;
			break;
		case '0':
			i = params->zero_flag = 1;
			break;
	}
	return (i);
}
