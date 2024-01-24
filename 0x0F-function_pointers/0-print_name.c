#include "function_pointers.h"
/**
  * print_name - function that prints a name
  * @name: pointer to a name
  * @f: pointer to a function that takes in an address of a string
  * Return: returns nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
