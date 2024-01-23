#include "dog.h"
#include <stdio.h>
/**
  * print_dog - function that prints the stucture of a dog
  * @d: pointer to the structure of a dog
  * Return: returns nothing
  */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
