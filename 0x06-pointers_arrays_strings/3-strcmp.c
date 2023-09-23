#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first parameter
 * @s2: the second parameter
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
