#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * Return: returns 1 if c is alphabetic and 0 otherwise
 * @c: character that checks for alphabetic letters
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}
