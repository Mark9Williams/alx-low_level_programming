#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _calloc - allocates memory for an array, using calloc
  * @nmemb: stores the number of elements for an array
  * @size: size of each element of the array
  * Return: returns pointer to allocated memory or NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *char_array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);

	if (array != NULL)
	{
		char_array = (char *)array;
		for (i = 0; i < nmemb * size; i++)
		{
			char_array[i] = 0;
		}
	}

	return (array);
}
