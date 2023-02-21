#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - Sorts a given array using bubble sort algorithm
 * @array: The array to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, j, temp, n = size, swap = 0;

	if (size > 1)
	{
		while (n > 0)
		{
			for (j = 1; j < n; j++)
			{
				if (array[i] > array[j])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					print_array(array, size);
					swap = 1;
				}
				i++;
			}
			if (swap == 0)
				break;
			n--;
			i = 0;
			swap = 0;
		}
	}
}
