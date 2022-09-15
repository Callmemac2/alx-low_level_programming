#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function that checks for a digit(0 though 9)
 * @c: checks for digit
 * Return: 1 if is digit, 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
