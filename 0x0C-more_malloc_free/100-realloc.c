#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: a pointer to the memory previously allocated with a call to malloc
  * @old_size:size in bytes of allocated space for ptr
  * @new_size: size in bytes of the new memory block
  * Return: returns a pointer to the allocted memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newmem;
	unsigned int mem, i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newmem = malloc(new_size);
		return (newmem);
	}
	if (new_size > old_size)
	{
		newmem = malloc(sizeof(*ptr) * old_size);
		mem = old_size;
	}
	else
	{
		newmem = malloc(sizeof(*ptr) * new_size);
		mem = new_size;
	}
	if (newmem == NULL)
		return (NULL);
	for (i = 0; i < mem; i++)
		((char *)newmem)[i] = ((char *)ptr)[i];
	free(ptr);
	return (newmem);
}
