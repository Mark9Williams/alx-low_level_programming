#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_dog - function that frees dogs
  * @d: pointer to the record of a dog
  * Return: returns nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
