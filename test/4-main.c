#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("\n%%\n");
	printf("%%\n");
	_printf("Should print a single percent sign: %%\n");
	printf("Should print a single percent sign: %%\n");
	_printf("\n%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("\ncss%ccs%scscscs", 'T', "Test");
	printf("css%ccs%scscscs", 'T', "Test");
	_printf(NULL);
	printf(NULL);
	_printf("\n%c", '\0');
	printf("\n%c\n", '\0');
	_printf("%");
	printf("%");
	_printf("%!\n");
	printf("%!\n");
	_printf("\n%K\n");
	printf("%K\n");
	return (0);
}
