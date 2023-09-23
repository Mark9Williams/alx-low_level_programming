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
	int i = 0;
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i <= n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start);
}
