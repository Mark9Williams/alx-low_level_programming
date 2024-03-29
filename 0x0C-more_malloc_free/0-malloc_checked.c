#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
  * malloc_checked - allocates memory using malloc
  * @b: stores size of memory to be allocated
  * Return: returns a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
