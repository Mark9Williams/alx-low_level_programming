#include "main.h"
/**
 * leet - encodes a string
 * @s: points to the string
 * Return: returns a pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char original[] = "aAeEoOtTlL";
	char encoded[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = encoded[j];
				break;
			}
		}
	}
	return (s);
}
