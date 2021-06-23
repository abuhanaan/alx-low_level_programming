#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _abs - Prints the absolute value of a number
 * @n: The number to convert to absolute
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
