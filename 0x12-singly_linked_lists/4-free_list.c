#include "lists.h"
#include <stdlib.h>
/**
  * free_list - a functions that frees a list
  * @head: pointer to the head of a list
  * Return: returns nothing
  */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
