#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char = %ld bytes\n", sizeof(a));
	printf("size of int = %ld bytes\n", sizeof(b));
	printf("size of long int = %ld bytes\n", sizeof(c));
	printf("size of long long int = %ld bytes\n", sizeof(d));
	print("size of float = %ld bytes\n", sizeof(e));
	return (0);
}
