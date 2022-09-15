#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the numbers from 0 to 9
 * without printing 2 an 4
 * Return : Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '9')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
