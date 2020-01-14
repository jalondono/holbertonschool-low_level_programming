#include "search_algos.h"

/**
 * linear_search - Function that creates a binary tree node
 * @array: Array of values
 * @size: is the size of the array
 * @value: value to match
 * Return: Index of matched number inside the array
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%d]\n", array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
