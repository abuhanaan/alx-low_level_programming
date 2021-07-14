#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints all arguments
 * @argc: holds the number of arguments
 * @argv: Points to an array that holds the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
