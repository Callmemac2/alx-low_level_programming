#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that print alphabet in lowercase and uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
