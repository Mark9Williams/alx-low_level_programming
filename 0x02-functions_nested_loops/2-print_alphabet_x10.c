#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: returns nothing
 */

void print_alphabet_x10(void)
{
	int ch, n = 0;

	while (n <= 10)
	{
		ch = 'a';

		_putchar('\n');
		while (ch <= 'z' && n != 10)
		{
			_putchar(ch);
			ch++;
		}
		n++;
	}
}
