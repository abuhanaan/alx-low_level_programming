#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first integer
 * @b: Second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
