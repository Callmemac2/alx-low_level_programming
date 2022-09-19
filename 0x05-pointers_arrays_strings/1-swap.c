#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 *
 * @a: one of integer
 *
 * @b: second integer
 *
 * Return; Always 0.
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
