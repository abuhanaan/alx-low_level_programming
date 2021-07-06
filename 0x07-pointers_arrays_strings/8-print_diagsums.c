#include "holberton.h"

/**
 * print_diagsums - Print the diagonal elements of a square matrix
 * @a: array of square matrix
 * @size: width of the square matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
