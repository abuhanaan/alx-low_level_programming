#include "holberton.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: the string in question
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
