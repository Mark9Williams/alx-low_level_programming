#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: points to the resulting string
 * @src: points to the string to be added to the first
 * @n: This the number of characters to be added
 * Return: returns pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	/* Append a null byte if src is less than n */
	if (i < n)
	{
		dest[dest_len + i] = '\0';
	}

	return (dest);
}
