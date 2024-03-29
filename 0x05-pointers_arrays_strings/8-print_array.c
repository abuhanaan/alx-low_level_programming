#include <stdio.h>

/**
 * print_array - Prints through the elements of an array followed by new line
 * @a: The array to be iterated through
 * @n: Length of the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
