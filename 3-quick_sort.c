#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick Sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Description: This function sorts an array of integers using the Quick Sort
 * algorithm and prints the array after each swap.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}

