#include "main.h"

/**
 * print_number -prints an integer
 * @n: number to be printed
 * Return: returns nothing
 */
void print_number(int n)
{
	int  reverse = 0, sign = 1;

	if (n < 0)
	{
		n = -n;
		sign = -sign;
	}
	else if (n == 0)
		_putchar('0');
	while (n)
	{
		reverse = (reverse * 10) + (n % 10);
		n = n / 10;
	}
	if (sign < 0)
		_putchar('-');
	while (reverse)
	{
		_putchar(reverse % 10 + '0');
		reverse /= 10;
	}
}
