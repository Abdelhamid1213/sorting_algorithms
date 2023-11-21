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
    if (array == NULL || size < 2)
        return;

    size_t i, j;
    int min, tmp;

    for (i = 0; i < size - 1; i++)
    {
        size_t min_index = i;
        min = array[i];

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                min_index = j;
            }
        }

        if (min_index != i)
        {
            tmp = array[i];
            array[i] = array[min_index];
            array[min_index] = tmp;

            print_array(array, size);
        }
    }
}
