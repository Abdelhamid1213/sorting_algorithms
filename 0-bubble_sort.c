#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the bubble sort algorithm.
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, c_size = size;
	int l, r;

	while (size)
	{
		for (i = 0; i < size - 1; i++)
		{
			l = array[i];
			r = array[i + 1];
			if (r < l)
			{
				array[i] = r;
				array[i + 1] = l;
				print_array(array, c_size);
			}
		}
		--size;
	}
}
