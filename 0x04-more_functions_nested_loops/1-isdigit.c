#include "holberton.h"

/**
 * _isdigit - checks whether or not a character is a digit
 * @c: character to be checked.
 *
 * Return: 1 if c is digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

