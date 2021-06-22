#include <stdio.h>

/**
 * _islower - Checks for lowercase
 *
 * @c: The character to check
 *
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
