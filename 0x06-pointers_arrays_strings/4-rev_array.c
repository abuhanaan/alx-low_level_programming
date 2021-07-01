#include "holberton.h"

/**
 * reverse_array - Reverses an array
 * @a: The array to be reversed
 * @n: Number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
