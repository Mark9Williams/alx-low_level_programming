#include <stddef.h>
#include "function_pointers.h"
/**
  * array_iterator - a function that executes a function given as a parameter
  * @array: pointer to an array
  * @size: size of array
  * @action: pointer to a function
  * Return: returns nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
