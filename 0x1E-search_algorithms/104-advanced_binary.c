#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: pointer to the first element of the [sub]array to search.
  * @start: starting index of the subarray to be searched.
  * @end: ending index of the subarray to be searched.
  * @value: The value to search for.
  *
  * Return: -1 if the value is not present.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the subarray being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = start + (end - start) / 2;
	if (array[i] == value && (i == start || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, start, i, value));
	return (advanced_binary_recursive(array, i + 1, end, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: pointer to the first element of the array to be searched.
  * @size: number of elements in the array.
  * @value: the value to search to be for.
  *
  * Return: -1 if the value is not present or the array is NULL,
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the subarray being searched after each change.
  */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
