#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: returns nothing
 */

void print_alphabet_x10(void)
{
	int ch, n = 1;

	while (n <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		if (n <= 10)
		{
			_putchar('\n');
		}
		n++;
	}
}
