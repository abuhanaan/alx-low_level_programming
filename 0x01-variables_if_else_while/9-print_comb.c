#include <stdio.h>

/**
 * main - Prints from 0 - 9 followed by , and space
 * Return: 0
 */


int main(void)
{
	int n = 48;

	for (; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			break;
		putchar(',');
		putchar(32);
	}
	putchar('\n');

	return (0);
}
