#include "main.h"
/**
  * wildcmp - comapares two strings and returns 1 if the strings are identical
  * @s1: placeholder for the first string
  * @s2: placeholder for the second string
  * Return: returns 0 or 1
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1))))
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
