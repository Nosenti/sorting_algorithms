#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using bubble sort algorithm
 * @array: Array of integers
 * @size: size of the array
 * Return: Nothing - just sort
*/
void bubble_sort(int *array, size_t size)
{
    int i, j, temp;

    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; i++){
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}