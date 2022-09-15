#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print the numbers from 0 to 9
 *
 * Return : Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 'O'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
