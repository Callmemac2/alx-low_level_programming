#include "main.h"

/**
 * reverse_array - Function that reverse the content of an array of integers
 *
 * @a: The array
 *
 * @n: The number of elements of the array
 *
 * Return: Always 0.
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
