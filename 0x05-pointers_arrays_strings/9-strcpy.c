#include "main.h"
/**
 * *_strcpy - copies a string pointed to by src
 * @dest: points to the string copied
 * @src: points to the string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}
