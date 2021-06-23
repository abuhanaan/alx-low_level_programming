#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - Checks if a character is alphabet
 * @c: The character to be checked
 * Return: 1 or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' || c >= 'Z') && (c <= 'a' || c <= 'z'))
		return (1);
	else
		return (0);
}
