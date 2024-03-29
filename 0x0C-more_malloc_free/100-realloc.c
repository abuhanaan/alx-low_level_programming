#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr:  is a pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size).
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to reallocated memory, if conditions met,
 * else, return based on specific conditions
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rmemb;
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		rmemb = malloc(new_size);
		if (rmemb == NULL)
			return (NULL);
	}
	if (new_size > old_size)
	{
		p = ptr;
		rmemb = malloc(new_size);
		for (i = 0; i < old_size; i++)
			rmemb[i] = p[i];
		free(ptr);
	}
	return (rmemb);
}
