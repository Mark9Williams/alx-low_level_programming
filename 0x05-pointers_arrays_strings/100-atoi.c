#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: points to the first character of the string
 * Return: return an integer in the string
 */
int _atoi(char *s)
{
	double result, sign = 1;

	for (; *s; s++)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			while (*s >= '0' && *s <= '9')
			{
				result = result * 10 + (*s - '0');
				s++;
			}
			break;
		}
	}
	return (result * sign);
}
