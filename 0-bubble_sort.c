#include "sort.h"

/**
* bubble_sort - Sorts an array of integers using bubble sort algorithm
* @array: Array of integers
* @size: size of the array
* Return: Nothing - just sort
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
