#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection Sort algorithm.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 *
 * Return: No return value (void).
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, ind_min;
	int tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		ind_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[ind_min])
				ind_min = j;
		}
		if (ind_min != i)
		{
			tmp = array[ind_min];
			array[ind_min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

