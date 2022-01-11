#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 *                  selection sort algorithm
 * @array: The array of integers to be sorted
 * @size: The size of @array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t index = 0, j, min;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (index < (size - 1))
	{
		min = index;
		for (j = index + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != index)
		{
			tmp = array[index];
			array[index] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
