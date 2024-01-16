#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * strtow - splits a string into words
  * @str: stores string to be splitted
  * Return: returns pointer to an array of strings or NULL if it fails
  */
char **strtow(char *str)
{
	char **strings;
	int height, i, len, index, p, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	height = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ' && str[i + 1] != ' ')
		{
			height += 1;
		}
	}
	strings = malloc(height * sizeof(char *));
	if (strings == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < height; i++)
	{
		len = 0;
		p = 0;
		while (str[index] != '\0' && p == 0)
		{
			if (str[index] != ' ')
			{
				len++;
			}
			if (str[index] != ' ' && str[index + 1] == ' ')
			{
				p = 1;
			}
			index++;
		}
		strings[i] = malloc((len + 1) * sizeof(char));
		position = index - len;
		for (k = i; k != i; k++)
		{
			for (j = 0; j < len; j++)
			{
				strings[k][j] = str[position];
				position++;
			}
			strings[k][j] = '\0';
		}
	}
	return (strings);
}
