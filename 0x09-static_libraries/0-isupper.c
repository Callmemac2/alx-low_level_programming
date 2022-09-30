#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to be tested
 * Return: 1 if is uppercase, or 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{

	if (i == c)
	{
		return (1);
	}
	}

	return (0);
}
