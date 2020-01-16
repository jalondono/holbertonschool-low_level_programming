#include "search_algos.h"
/**
 * interpolation_search - Function that creates a binary tree node
 * @array: Array of values
 * @size: is the size of the array
 * @value: value to match
 * Return: Index of matched number inside the array
 **/

int interpolation_search(int *array, size_t size, int value)
{
	int high = 0, low = 0, real_size = 0;
	size_t pos = 0;

	if (array == NULL)
		return (-1);
	real_size = size - 1;
	high = real_size;
	low = 0;
	while (high >= low)
	{
		pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
		if (pos > (unsigned int)real_size)
		{
			printf("Value checked array[%d] is out of range\n", (unsigned int)pos);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", (unsigned int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		if (array[pos] < value)
			low = pos + 1;
	}
	return (-1);
}
