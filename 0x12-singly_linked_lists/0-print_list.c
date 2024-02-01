#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_list - function that prints all elements of a list
  * @h: pointer to a list
  * Return: returns the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		num++;
	}
	return (num);
}
