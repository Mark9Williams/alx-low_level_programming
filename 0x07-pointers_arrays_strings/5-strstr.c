#include "main.h"
#include "stddef.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: a substring that is searched
 * Return: returns a pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	for (i = 0; haystack[i]; i++)
	{
		start = i;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j] || !(haystack[i]))
			{
				break;
			}
		}
		/* if loop is finished, substring was found */
		if (!(needle[j]))
		{
			return (&haystack[start]);
		}
	}
	return (NULL);
}
