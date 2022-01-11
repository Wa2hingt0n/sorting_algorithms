#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of @array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int n, swap = 0;
	size_t i = 0;

	if (array == NULL)
		return;

	while (swap >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				n = array[i + 1];
				array[i + 1] = array[i];
				array[i] = n;
				swap++;
				print_array(array, size);
			}
			i++;
		}
		if (swap == 0)
			swap = -1;
		else
			swap = 0;
	}
}
