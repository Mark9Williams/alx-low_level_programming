#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locats a character in a string
 * @s: string to be traversed
 * @c: character to be located
 * Return: returns a pointer to the character c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
