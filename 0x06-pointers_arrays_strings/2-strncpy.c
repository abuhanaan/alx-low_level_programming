#include "holberton.h"
#include <string.h>


/**
 * _strncpy - Copies up to n characters from the string pointed to
 * by src to dest. In a case where the length of src is less than
 * that of n, the remainder of dest will be padded with null bytes.
 *
 * @dest: Points to the destination array where the content is to be copied
 * @src: The string to be copied
 * @n: maximum number of character to be copied from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
