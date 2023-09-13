#include "main.h"

/**
 * print_alphabet -  It prints the alphabet in lowercase
 * Return: returns 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
