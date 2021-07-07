#include "holberton.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: the string in question
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
