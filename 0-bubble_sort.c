#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
