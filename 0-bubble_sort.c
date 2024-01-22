#include "sort.h"
/**
 * bubble_sort - The function sorts an array of integers in ascending order
 * @array: Array that is to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, temp, last_unsorted;
	bool issorted = false;

	if (size < 2)
	{
		return;
	}
	else
	{
		last_unsorted = size - 1;
		while (!issorted)
		{
			issorted = true;
			for (i = 0; i < last_unsorted; i++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					print_array(array, size);
					issorted = false;
				}
			}
			last_unsorted--;
		}
		if (issorted)
			return;
	}
}
