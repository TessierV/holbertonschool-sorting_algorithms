#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx, temp;

	i = 0;
	j = 0;
	idx = 0;

	while (i < size)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
			}
		}
		if (array[idx] != array[i])
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}
		i++;
	}
}
