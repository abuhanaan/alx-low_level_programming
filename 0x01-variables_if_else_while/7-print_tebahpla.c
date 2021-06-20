#include <stdio.h>

/**
 * main - Prints alphabet in lower case in reverse order
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
