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
	char **words;
	int i, word_count, word_index, word_len, j, position, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ')
			word_count++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}
	words = malloc((word_count) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_index = 0;
	for (i  = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
			word_len++;

		words[word_index] = malloc((word_len + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j <= word_index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		position = i;
		for (k = word_index; k == word_index; k++)
		{
			for (j = 0; j < word_len; j++)
			{
				strings[word_index][j] = str[position];
				position++;
			}
			strings[word_index][j] = '\0';
		}
		i += (word_len - 1);
	}
	return (strings);
}
