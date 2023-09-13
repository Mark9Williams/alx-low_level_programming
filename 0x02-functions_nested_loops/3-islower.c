#include "main.h"

/**
 * _islower - Checks for lower case character
 * Return: It returns 1 if c is a lowercase and 0 otherwise
 * @c: character to check if a letter is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
