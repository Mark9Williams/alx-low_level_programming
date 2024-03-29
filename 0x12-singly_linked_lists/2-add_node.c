#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * add_node - a function that adds a new node at the beginning of a list
  * @head: pointer to the head
  * @str: pointer to a string
  * Return: returns address of a new element or NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
