#include "main.h"

/**
 * _memcpy - Function that copie memory area
 *
 * @dest: An array where will be copied to
 *
 * @src: The string to be copied
 *
 * @n: The number of characters to be copied
 *
 * Return: to pointer dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
