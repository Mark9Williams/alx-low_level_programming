#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * create_array - creates an array of characters and initializes it
  * with a specific char
  * @size: size of a an array
  * @c: character to be initialised to an  array
  * Return: returns a pointer to a charater or zero
  */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(char));
	if (b == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		b[i] = c;
	return (b);
}

