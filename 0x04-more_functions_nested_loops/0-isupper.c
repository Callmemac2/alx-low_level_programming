#include <main.h>

/**
 * _isupper - checks if character is uppercase
 *@c: the character to check
 * Return: 1 if is upperca or 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{

		return (1);
	}

	return (0);
}
