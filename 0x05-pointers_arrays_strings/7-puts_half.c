#include "main.h"

/**
 * puts_half - prints half of the string
 *@str: points to the first character of a string
 */

void puts_half(char *str)
{
	int len = 0, i = 0, n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
	{
		len = (len / 2);
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	else
	{
		n = (len - 1) / 2;
		n++;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
