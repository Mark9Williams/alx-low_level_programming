#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: pointer to the first string
  * @s2: pointer to the second string
  * @n: number of characters from second string to be added to the first string
  * Return: returns pointer to the new string or NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len, i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = 0;
	while (s1[len] != '\0')
		len++;
	len += n;

	s3 = malloc((len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (k = 0; k < n && s2[k] != '\0'; k++)
	{
		s3[i] = s2[k];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
