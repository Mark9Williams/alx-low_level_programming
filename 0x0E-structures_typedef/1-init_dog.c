#include "dog.h"
#include <stdio.h>
/**
  * init_dog - function that initialize a variable of type struct dog
  * @d: pointer to the dog structure
  * @name: pointer to the dog name
  * @age: age of a dog
  * @owner: pointer to the owner of a dog
  * Return: returns nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
