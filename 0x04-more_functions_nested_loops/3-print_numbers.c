#include "main.h"
/**
 * print_numbers - prints numbers 0 through 9
 * Return: returns nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
