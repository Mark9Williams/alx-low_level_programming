#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * str_concat - concatenates two strings
  * @s1: pointer to a string
  * @s2: pointer to a string
  * Return: returns pointer to the concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int len_a, len_b, index_a, index_s2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	len_a = 0;
	while (s1[len_a] != '\0')
	{
		len_a += 1;
	}
	len_b = 0;
	while (s2[len_b] != '\0')
	{
		len_b += 1;
	}
	a = malloc((len_a + len_b + 1) * sizeof(*a));
	if (a == NULL)
		return (NULl);
	index_a = 0;
	while (index_a < len_a)
	{
		a[index_a] = s1[index_a];
		index_a++;
	}
	index_s2 = 0;
	while (s2[index_s2] != '\0')
	{
		a[index_a] = s2[index_s2];
		index_a++;
		index_s2++;
	}
	a[index_a] = '\0';
	return (a);
}
