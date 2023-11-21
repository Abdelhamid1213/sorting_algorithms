#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                   the selection sort algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, idx, tmp;
	int swap;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				idx = j;
				swap = 1;
			}
		}
		tmp = array[i];
		array[i] = min;
		array[idx] = tmp;
		if (swap)
		{
			print_array(array, size);
		}
	}
}
