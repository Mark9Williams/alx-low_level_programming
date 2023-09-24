#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: points the copied string
 * @src: points to the string to be copied
 * @n: parameter three
 * Return: returns a pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* if  src has fewer than n characters */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
