#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet, in lowercase, followed by a new line.
 * Proided some other conditions are met
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
