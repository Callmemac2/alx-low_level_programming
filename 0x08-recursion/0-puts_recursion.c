#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @s: input
 *
 * Return: ALways 0.
 *
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
