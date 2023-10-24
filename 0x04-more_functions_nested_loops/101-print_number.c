#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: the integer to be printed
 * Return: returns nothing
 */
void print_number(int n)
{
	unsigned int result = 0, m;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n;

	while (m != 0)
	{
		result = result * 10 + m % 10;
		m = m / 10;
	}

	while (result != 0)
	{
		_putchar(result % 10 + '0');
		result = result / 10;
	}
}
