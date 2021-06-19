#include <stdio.h>

/**
 * main - Prints the size of arious types
 * Return: 0
 */

int main(void)
{

	int i;
	int long long h;
	int long s;
	float f;
	char c;

	printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(s));
	printf("Size a long long int: %lu byte(s)\n", (unsigned int)sizeof(h));
	printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(f));

	return (0);
}
