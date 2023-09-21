#include "main.h"
/**
 * print_rev - prints the string in reverse followed by a new line
 * @s: points to the first character of the string to be printed
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	/* Point  to the last character before null terminator */
	s--;

	for (; len > 0; len--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
