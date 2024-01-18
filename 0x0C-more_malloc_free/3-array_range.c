#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * array_range - creates an array of integers
  * @min: stores minimum value of an array
  * @max: stores maximum value of an array
  * Return: returns a pointer to a newly cretaed array
  */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
