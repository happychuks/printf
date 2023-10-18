#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%b\n", 98);
	_printf("%R || %r\n", "HELLO", "WORLD");
	_printf("%.9s", "Best School !\n");
	_printf("%.*s", 6, "Best School !\n");
	return (0);
}
