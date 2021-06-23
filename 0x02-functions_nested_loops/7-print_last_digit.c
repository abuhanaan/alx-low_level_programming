#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - Print last four digit of a number
 * @n: The number in question
 * Return: 0
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
