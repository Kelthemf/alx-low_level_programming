#include "main.h"

/**
 * _isupper - checker
 * @c: char
 * Return: 1 or 0
 */

int _isupper(int c)
{
	int i;

	if (c <= 'Z' && c >= 'a')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
