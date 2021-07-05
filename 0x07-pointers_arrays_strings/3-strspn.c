#include "holberton.h"
#include <string.h>

/**
 * _strspn - calculates the length (in bytes) of the
 * initial segment of s which consists entirely of bytes in
 * accept
 * @s: first arg
 * @accept: second arg
 * Return: length of the byte
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
