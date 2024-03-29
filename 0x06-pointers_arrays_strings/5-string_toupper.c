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

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
