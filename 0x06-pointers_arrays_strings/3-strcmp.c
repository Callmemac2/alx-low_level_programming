#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compare two strings
 *
 * @s1: string input
 *
 * @s2: string input
 *
 * Return: Always 0.
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		else if (s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
	}
	return (0);
}
