#include <stdio.h>

/**
 * main - Prints all possible combo of 2 digits
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != '8' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
