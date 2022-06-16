#include "main.h"

/**
 * _strcmp - compares @s1 and @s2
 * @s1: string
 * @s2: string
 * Return: s1: <0 - s1<s2; 1 s1=s2, >0 s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare = s1[counter] - s2[counter];
	return (compare);
}
