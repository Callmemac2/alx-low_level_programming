#include "main.h"

/**
 * rev_string - function that reverse a string.
 *
 * @s: the input
 *
 * Return: Always 0.
 *
 */
void rev_string(char *s)
{
	char first, last;
	int i, begin, end;

	i = 0;

	while (s[i] != '\0')
	i++;

	begin = i - 1;
	end = begin / 2;

	while (end >= 0)
	{
		first = s[begin - end];
		last = s[end];
		s[end] = first;
		s[begin - end] = last;
		end--;
	}
}
