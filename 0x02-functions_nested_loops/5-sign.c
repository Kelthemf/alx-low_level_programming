#include "main.h"

/**
 * print_sign - print sign
 * @n: int
 * Return: 0, 1, -1
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
