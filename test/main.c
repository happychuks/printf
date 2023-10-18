#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 * Test compilation is to be done with:
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
 * -Wno-format will suppress the [%r] error
 * But finally compiled with:
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("%s", "Let's try to printf\\///\\//.\n");
	len2 = printf("%s", "Let's try to printf\\///\\//.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -942534);
	printf("Negative:[%d]\n", -942534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("%b\n", 98);
	printf("%b\n", 98);
	_printf("%.9s", "Best School !\n");
	_printf("\n");
	printf("%.9s", "Best School !\n");
	_printf("\n");
	_printf("%R || %r\n", "HELLO", "WORLD");
	_printf("\n");
	printf("%R || %r\n", "HELLO", "WORLD");
	_printf("\n");
	_printf("%.*s", 6, "Best School !\n");
	_printf("\n");
	printf("%.*s", 6, "Best School !\n");
	_printf("\n");
	return (0);
}
