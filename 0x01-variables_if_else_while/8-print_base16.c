#include <stdio.h>

/**
 * main - all the numbers of base 16 in lowercase, followed by a new line - 0123456789abcdef
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
