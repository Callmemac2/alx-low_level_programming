#include <stdlib.h>
#include <time.h>
#include <Stdio.h>
/**
 * main - Entry point
 * Description: Assign a random number to the variable in order to print
 * number if the number is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(O));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n"), n);

	return 0
}
