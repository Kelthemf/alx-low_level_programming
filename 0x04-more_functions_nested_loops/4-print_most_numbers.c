#include "main.h"

/**
 * print_most_numbers - except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9 && i != 2 && i != 4)
	{
		_putchar(i + '0');
		i++;
	}
}
