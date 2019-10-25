#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	float startTime = 0, endTime = 0, timeElapsed = 0;
	size_t  i = 0;
	int auxValueArray = 0, j = 1;
	startTime = (float)clock()/CLOCKS_PER_SEC;
	while (j == 1)
	{
		j = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				auxValueArray = array[i + 1];
				array[i + 1] = array[i];
				array[i] = auxValueArray;
				j = 1;
				print_array(array, size);
			}
		}
	}
}