#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 * integers using the Linear serch algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located or -1 if value not
 * in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			printf("Value checked array[%lu] = [%d]\n", \
					(unsigned long)i, array[i]);
			return (i);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
