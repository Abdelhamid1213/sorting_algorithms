#include "sort.h"
#include <stddef.h>

/**
 * hoare_partition - Hoare partition scheme for quicksort
 * @array: Pointer to the first element of the array.
 * @low: The starting index of the partition to be sorted.
 * @high: The ending index of the partition to be sorted.
 * @size: Number of elements in the array.
 *
 * Return: The index of the pivot after partitioning.
 */
size_t hoare_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot, tmp;
	ssize_t i, j;

	pivot = array[low];
	i = low - 1;
	j = high + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return j;

		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;

		print_array(array, size);
	}
}

/**
 * quicksort - Recursive function to perform quicksort
 * @array: Pointer to the first element of the array.
 * @low: The starting index of the partition to be sorted.
 * @high: The ending index of the partition to be sorted.
 * @size: Number of elements in the array.
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	size_t pivot;

	if (low < high)
	{
		pivot = hoare_partition(array, low, high, size);
		quicksort(array, low, pivot, size);
		quicksort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm with Hoare partition scheme.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
