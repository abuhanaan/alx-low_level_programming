#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - Checks the sign of a number
 * @n: The number whose sign is to be checked
 * Return: 1 if positive, 0 if negative and -1 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
