#include "lists.h"
#include <stdio.h>
/**
  * list_len - returns the number of elements in a list
  * @h: pointer to list_h
  * Return: returns the number of elemets in a list
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
