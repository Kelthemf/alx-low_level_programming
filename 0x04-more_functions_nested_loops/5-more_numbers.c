#include "main.h"

/**
 * more_numbers - 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (j < 11)
	{
		while (i < 15)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			if (i > 9)
			{
				_putchar((i % 10) + '0');
				_putchar((i / 10) + '0');
			}
			i++;
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
