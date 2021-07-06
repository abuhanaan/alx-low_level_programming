#include "holberton.h"

/**
 * print_diagsums - Print the diagonal elements of a square matrix
 * @a: array of square matrix
 * @size: width of the square matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum_first_diag, sum_second_diag, i = 0;

	sum_first_diag = _sum(a[i][i] for i in range (size));
	sum_second_diag = _sum(a[i][size - i - 1] for i in range (size));

	_putchar("%d, %d\n", sum_first_diag, sum_second_diag);

	return (0);
}
