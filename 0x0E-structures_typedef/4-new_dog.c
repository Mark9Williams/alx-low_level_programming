#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - a function that creates a new dog
  * @name: pointer to the name of a dog
  * @age: age of a dog
  * @owner: name of the dog owner
  * Return: returns a pointer to a dog_t type
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;

	dog_1 = malloc(sizeof(dog_t));

	if (dog_1 == NULL)
		return (NULL);
	dog_1->name = name;
	dog_1->age = age;
	dog_1->owner = owner;

	return (dog_1);
}
