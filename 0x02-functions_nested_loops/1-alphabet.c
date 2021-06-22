#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 * Proided some other conditions are met
 * Return: 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
