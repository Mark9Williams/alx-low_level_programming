#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strdup - returns a pointer to the allocated space in memory
  * @str:stores  string
  * Return: returns a pointer to memory or NULL
  */
char *_strdup(char *str)
{
	char *a;
	int index, i;

	if (str == NULL)
		return (NULL);
	index = 0;
	while (str[index] != '\0')
	{
		index += 1;
	}

	a = malloc((index + 1) * sizeof(*str));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		a[i] = str[i];
	}
	a[index] = '\0';
	return (a);
}
