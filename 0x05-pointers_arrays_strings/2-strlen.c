#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: parameter that stores the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	return (len);
}
