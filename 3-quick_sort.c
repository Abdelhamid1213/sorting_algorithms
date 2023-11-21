#include "sort.h"

/**
 * lomuto_partition - Lomuto partition scheme for quicksort
 * @array: Pointer to the first element of the array.
 * @low: The starting index of the partition to be sorted.
 * @high: The ending index of the partition to be sorted.
 * @size: Number of elements in the array.
 *
 * Return: The index of the pivot after partitioning.
 */
size_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
    int pivot, tmp;
    ssize_t i, j;

    pivot = array[high];
    i = low - 1;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;

            if (i != j)
                print_array(array, size);
        }
    }

    tmp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = tmp;

    if (i + 1 != high)
        print_array(array, size);

    return (i + 1);
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
        pivot = lomuto_partition(array, low, high, size);
        quicksort(array, low, pivot - 1, size);
        quicksort(array, pivot + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm with Lomuto partition scheme.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quicksort(array, 0, size - 1, size);
}
