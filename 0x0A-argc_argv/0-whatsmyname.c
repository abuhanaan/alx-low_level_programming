#include "holberton.h"

/**
 * main - prints the name of the program
 * @argc: holds the numbers of parameters passed into the program
 * @argv: holds the parameters passed into the program
 * Return: (0)
 */


int main(int argc, char *argv[])
{
	
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
