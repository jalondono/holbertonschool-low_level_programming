#include "sort.h"

void shell_sort(int *array, size_t size)
{
	size_t gap = size / 2, i = 0, j = 0, k = 0;
	int temp = 0;
	for (i = gap; i > 0; i /= 2)
	{
		for (j = gap; j < size; i += 1)
		{
			temp = array[i];
			for (k = i; k >= gap && array[j - gap] > temp; k -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
	}
}
