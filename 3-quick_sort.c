#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */

void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}

/**
 * quick - Function that calls itself
 * @array: Array to be sorted
 * @start: First index
 * @end: Last index
 * @size: size of the array
 */
void quick(int *array, int start, int end, int size)
{
	int pivot;

	if (end <= start)
		return;
	pivot = partition(array, start, end, size);
	quick(array, start, pivot - 1, size);
	quick(array, pivot + 1, end, size);
}

/**
 * partition - Returns the index of the pivot
 * @array: Array to be partitioned
 * @start: First index
 * @end: Last index
 * @size: Size of the array
 *
 * Return: Index of the pivot
 */

int partition(int *array, int start, int end, int size)
{
	int pivot;
	int temp;
	int i;
	int j;

	i = end;
	pivot = start;
	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < array[i])
		{
			if (j != pivot)
			{
				temp = array[j];
				array[j] = array[pivot];
				array[pivot] = temp;
				print_array(array, size);
			}
			pivot++;
		}
	}
	if (pivot != i && (array[pivot] != array[i]))
	{
		temp = array[pivot];
		array[pivot] = array[i];
		array[i] = temp;
		print_array(array, size);
	}

	return (pivot);
}
