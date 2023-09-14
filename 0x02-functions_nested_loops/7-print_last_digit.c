#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: It is the number whose last digit is required
 * Return: returns the last of a number
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
