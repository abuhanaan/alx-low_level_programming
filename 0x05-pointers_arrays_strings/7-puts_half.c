#include "holberton.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string in question
 */

void puts_half(char *str)
{
	int i, l, n;

	l = strlen(str);

	if (l % 2 != 0)
	{
		n = (l - 1) / 2;
		n = n + 1;
	}
	else
	{
		n = l / 2;
	}

	for (i = n; i < l; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
