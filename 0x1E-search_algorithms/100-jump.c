#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that creates a binary tree node
 * @array: Array of values
 * @size: is the size of the array
 * @value: value to match
 * Return: Index of matched number inside the array
 **/

int jump_search(int *array, size_t size, int value)
{
	int step = 0, low = 0, high = 0;
	int i = 0;
	int real_size = 0;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	high = step;
	real_size = size - 1;
	printf("Value checked array[%d] = [%d]\n", low, array[low]);
	while(array[high] < value)
	{
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		if (array[low] == value)
			return (low);
		if (array[high == value])
			return (high);
		high += step;
		low += step;
		if (high > real_size)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	for (i = low; i <= high; ++i)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i >= real_size)
			return (-1);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
