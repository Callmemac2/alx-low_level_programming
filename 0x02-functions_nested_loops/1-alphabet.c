#include "main.h"
/**
 * print_alphabet - Function that prints alphabet.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
