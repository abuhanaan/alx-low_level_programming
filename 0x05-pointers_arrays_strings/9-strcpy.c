#include "holberton.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed by source to destination
 * @dest: Where the string is beign copied to
 * @src: Where the string is being copied from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	
	return dest;
}
