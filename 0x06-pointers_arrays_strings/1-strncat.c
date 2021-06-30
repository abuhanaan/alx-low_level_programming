#include "holberton.h"
#include <string.h>


/**
 * _strncat - Appends not more than n characters from the string
 * pointed to by src to the end of the string pointed to by dest
 * plus a terminating Null-character
 *
 * @dest: the string where we want to append
 * @src: the string from which ‘n’ characters are going to append
 * @n: maximum number of character to be appended
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
