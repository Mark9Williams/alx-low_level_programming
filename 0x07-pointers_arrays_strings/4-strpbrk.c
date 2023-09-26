#include "main.h"
#include "stddef.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: parameter that points to the string
 * @accept: string whose characters are searched
 * Return: return to a byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
