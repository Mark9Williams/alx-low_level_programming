#include "main.h"

/**
 * puts2 - prints every other character of a string starting with first
 * @str: points to the first character of the string that is to be printed
 * return: Returns nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
