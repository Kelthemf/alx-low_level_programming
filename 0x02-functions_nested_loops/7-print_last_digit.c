#include "main.h"

/**
 * print_last_digit - pld
 * @a: int
 * Return: ld
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = a / -1;
		a = a % 10;
	}
	else if (a == 0)
	{
		a = a;
	}
	else
	{
		a = a % 10;
	}
	_putchar( a + '0');

	return (a);
}
