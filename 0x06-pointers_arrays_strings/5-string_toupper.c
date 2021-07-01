#include "holberton.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string in question
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;
	char c;

	for (i = 0; str[i] != '\0'; ++i)
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c = c - 32;

	}

	return (str);
}
