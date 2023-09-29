#include "sort.h"

/**
 * swap - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of two integers.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Partitions an array around a pivot element.
 * @t: The array to be partitioned.
 * @imin: The starting index of the subarray.
 * @imax: The ending index of the subarray.
 * @size: The size of the array.
 *
 * Return: The index of the pivot element after partitioning.
 *
 * Description: This function partitions an array using the Quick Sort
 * algorithm and prints the array after each swap.
 */
int partition(int *t, int imin, int imax, size_t size)
{
	int pivot = t[imax];
	int compt = imin - 1;
	int i;

	for (i = imin; i <= imax - 1; i++)
	{
		if (t[i] < pivot)
		{
			compt++;
			swap(&t[compt], &t[i]);
			if (t[compt] != t[i])
			{
				print_array(t, size);
			}
		}
	}
	swap(&t[compt + 1], &t[imax]);
	if (t[compt + 1] != t[imax])
	{
		print_array(t, size);
	}

	return (compt + 1);
}

/**
 * quick_sort_helper - Helper function for Quick Sort algorithm.
 * @array: The array to be sorted.
 * @imin: The starting index of the subarray.
 * @imax: The ending index of the subarray.
 * @size: The size of the array.
 *
 * Description: This function recursively sorts an array using the Quick Sort
 * algorithm and prints the array after each swap.
 */
void quick_sort_helper(int *array, int imin, int imax, size_t size)
{
	int pivot_idx;

	if (imin < imax)
	{
		pivot_idx = partition(array, imin, imax, size);
		quick_sort_helper(array, imin, pivot_idx - 1, size);
		quick_sort_helper(array, pivot_idx + 1, imax, size);
	}
}

