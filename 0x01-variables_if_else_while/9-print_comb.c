#include <stdio.h>

/**
 * main - Prints from 0 - 9 followed by , and space
 * Return: 0
 */


int main(void)
{
	int a;
	int b = ',';
	int c = ' ';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(b);
		putchar(c);
	}
	putchar('\n');

	return (0);
}
