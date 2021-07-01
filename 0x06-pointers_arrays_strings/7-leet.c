#include "holberton.h"

/**
 * leet - encodes a sting into 1337 format
 * @str: The string in question
 * Return: str
 */

char *leet(char *str)
{
	int i, k;

	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
