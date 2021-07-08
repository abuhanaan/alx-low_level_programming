#include "holberton.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number in question
 * Return: 1 if n is prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	int i, m = 0, flag = 1;

	m = n / 2;
	for (i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (n == 2)
		return (1);
	else if (n < 2)
		return (0);
	if (flag == 0)
		return (0);
	else
		return (1);
}
