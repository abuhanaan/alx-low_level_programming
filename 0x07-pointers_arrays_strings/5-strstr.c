#include "holberton.h"
#include <string.h>

/**
 * _strstr -  finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: The bigger string to be searched
 * @needle: The string to be searched for
 * Return: First occurence of the needle
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
