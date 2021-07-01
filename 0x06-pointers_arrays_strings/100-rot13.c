#include "holberton.h"

/**
 * rot13 - encode string into rot13 forrmat
 * @str: the string in question
 * Return: the encoded string
 */

char *rot13(char *str)
{
	char *c = str;
	int i = 0, j;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
