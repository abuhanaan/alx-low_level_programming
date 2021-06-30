#include "holberton.h"
#include <string.h>

/**
 * strcat - Conacatenates two strings together
 * dest: First string, second string is appended to it
 * src: Second string, it is appended to the first
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
