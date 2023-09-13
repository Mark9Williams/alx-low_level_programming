#include "main.h"

/**
  * print_sign - prints the sign of a number
  * Return: returns 1 if a number is greater than 0/
  * 0 if a number is zero/
  * -1 if a number is less than zero
  * @n: character that checks the sign of a number
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

