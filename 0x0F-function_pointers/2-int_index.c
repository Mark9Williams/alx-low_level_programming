#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - function that searches for an integer.
  * @array: pointer to an array
  * @size: is the number of elements in the array array
  * @cmp:  is a pointer to the function to be used to compare values
  * Return: returns an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			return (i);
		}
	}
	return (-1);
}
