#include "holberton.h"
#include <string.h>

/**
 * puts2 - Prints some particular characters of a string
 * depending on some defined condition
 * @str: the string in question
 * Return: 0
 */

void puts2(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		if (str[i] % 2 != 0)
		{
			continue;
		}
		printf("%c", str[i]);
	}
	printf("\n");
}
