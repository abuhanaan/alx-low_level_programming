#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Prints a string using a header from an external module
 * Return: 0
 */

int main(void)
{
	char* c = "Holberton";

	while (*c)
		_putchar(*c++);
	_putchar('\n');
	return (0);
}
