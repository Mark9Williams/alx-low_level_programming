#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: strores a pointer to the destination string
 * @src: strores a pointer to the source string
 * Return: returns a pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (start);
}
