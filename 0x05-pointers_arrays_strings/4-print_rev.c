#include "holberton.h"
#include <string.h>

/**
 * print_rev - Prints a tring in reverse
 * @s: the string in question
 * Return: 0
 */

void print_rev(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
