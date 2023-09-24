#include "main.h"

/**
 * print_number -prints an integer
 * @n: number to be printed
 * Return: returns nothing
 */
void print_number(int n)
{
	unsigned int  reverse = 0, num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	while (num)
	{
		reverse = (reverse * 10) + (n % 10);
		n = n / 10;
	}

	while (reverse)
	{
		_putchar(reverse % 10 + '0');
		reverse /= 10;
	}
}
