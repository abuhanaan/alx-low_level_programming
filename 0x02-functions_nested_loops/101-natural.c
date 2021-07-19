#include <stdio.h>

/**
 * main - Prints out multiple of natural number in 1024
 * Return: 0
 */

int main(void)
{
	int n = 1;
	int r = 1;

	while (n <= 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			r = r * n;
		}
		n++;
	}

	printf("%d\n", r);

	return (0);
}
