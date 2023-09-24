#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: points to the string to be encoded
 * Return: returns a pointer to the encoded string
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
