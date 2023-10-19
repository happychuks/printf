#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int l = INT_MAX;
	long int h = INT_MIN;

	l += 1024;
	h -= 1024;
	_printf("\n%+d\n", l);
	printf("%+d\n", l);
	_printf("\n%+d\n", h);
	printf("%+d\n", h);
	_printf("\n%+d\n", 1024);
	printf("%+d\n", 1024);
	_printf("\n%+d\n", -1024);
	printf("%+d\n", -1024);
	_printf("\n%+d\n", 0);
	printf("%+d\n", 0);
	_printf("\n%+d\n", INT_MAX);
	printf("%+d\n", INT_MAX);
	_printf("\n%+d\n", INT_MIN);
	printf("%+d\n", INT_MIN);
	_printf("\nThere is %+d bytes in %+d KB\n", 1024, 1);
	printf("There is %+d bytes in %+d KB\n", 1024, 1);
	_printf("\n%+d - %+d = %+d\n", 1024, 2048, -1024);
	printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	_printf("\n%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("\n%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	return (0);
}
