#include "holberton.h"

/**
 * _pow_recursion - Returns the power of a number
 * @x: The number in question
 * @y: The power
 * Return: The result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
