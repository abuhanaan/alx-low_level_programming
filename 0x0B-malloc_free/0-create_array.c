#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: The input char
 * Return: Returns a pointer to the array, or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char *) malloc(size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
