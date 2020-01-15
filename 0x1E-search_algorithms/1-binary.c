#include "search_algos.h"

/**
 * binary_search - Function that creates a binary tree node
 * @array: Array of values
 * @size: is the size of the array
 * @value: value to match
 * Return: Index of matched number inside the array
 **/

int binary_search(int *array, size_t size, int value)
{
	int middle = 0, start = 0, end = 0, current_value = 0, realsize = 0;
	int i = 0;

	if (array == NULL)
		return (-1);
	realsize = size - 1;
	middle = realsize / 2;
	end = realsize;

	printf("Searching in array: ");
	for (i = start; i < end ; ++i)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
	while (start != end)
	{
		middle = (start + end) / 2;
		current_value = array[middle];
		if (current_value == value)
			return (middle);
		if (value < current_value)
			end = middle - 1;
		if (value > current_value)
			start = middle + 1;
		printf("Searching in array: ");
		for (i = start; i < end ; ++i)
			printf("%d, ", array[i]);
		printf("%d\n", array[end]);
	}
	return (-1);
}
