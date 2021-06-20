#include <stdio.h>

/**
 * main - Prints from 0 - 9 followed by , and space
 * Return: 0
 */


int main(void)
{
	int n = '0';

	for (; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
