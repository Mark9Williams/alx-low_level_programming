#include "main.h"

/**
  * print_to_98 - prints all numbers from a given number to 98
  * Return: returns nothing
  * @n: stores any number which you can start from
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar(n + '0');
		_putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar(n + '0');
		_putchar('\n');
	}
}
