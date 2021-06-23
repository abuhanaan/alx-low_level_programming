#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Prints from any number to 98
 * @n: The starting point
 */

void print_to_98(int n)
{
	if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);
	else if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("%d\n", 98);
}

