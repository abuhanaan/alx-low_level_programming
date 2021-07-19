#include <stdio.h>

/**
 * main - Prints from 0 -9 using only putchar
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
