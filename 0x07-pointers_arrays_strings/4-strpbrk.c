#include "holberton.h"
#include <string.h>

/**
 * _strpbrk - calculates the length (in bytes) of the
 * initial segment of s which consists entirely of bytes in
 * accept
 * @s: first arg
 * @accept: second arg
 * Return: length of the byte
 */

char *_strpbrk(char *s, char *accept);
{
	return (strpbrk(s, accept));
}
