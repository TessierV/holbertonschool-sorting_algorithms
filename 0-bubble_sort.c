#include "sort.h"
/**
 * bubble_sort - function
 * @array: array to be sorted
 * @size: size of the array
 * Definition: a function that sorts an array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
