#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 *
 * @s: as pointer
 *
 * @b: constant byte
 *
 * @n: byte number
 *
 * Return: pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
