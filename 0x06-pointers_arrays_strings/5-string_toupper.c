#include "main.h"

/**
 * string_toupper - Function that changes all lowercas letters pf a string
 * to uppercase
 *
 * @str: the input parameter
 *
 * Return : Always 0.
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
			str[i] = str[i] - 32;
	}
	return (str);
}

