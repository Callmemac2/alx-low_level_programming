#include "main.h"

/**
 * _strncpy - Function that copies string
 *
 * @dest: Destination string
 *
 * @src: Source string
 *
 * @n: byte number
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
