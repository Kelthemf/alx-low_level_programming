#include "main.h"

/**
 * _abs - abs
 * @a: int
 * Return: 0 always
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a / -1;
	}
	else
	{
		a = a;
	}
	return (a);
}
