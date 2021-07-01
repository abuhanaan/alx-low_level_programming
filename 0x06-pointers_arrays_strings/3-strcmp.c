#include "holberton.h"
#include <string.h>

/**
 * _strcmp - Compares two strings together
 * @s1: first string to be compared
 * @s2: Second string to be compared
 * Return: if Return value < 0 then it indicates str1 is less than str2
 * if Return value > 0 then it indicates str2 is less than str1
 * if Return value = 0 then it indicates str1 is equal to str2
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
