#include <stdio.h>

/**
 * main - Prints alphabets excluding q and e
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
			continue;
		if (ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
