#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: the upper limit for the times table
 * Return: void
 */
void print_times_table(int n)
{
	int, column, m;

	if (n < 0 || n > 15)
		return;
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			m = row * column;
			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
				if(m < 10)
					_putchar(' ');
				if (m < 100)
					_putchar(' ');
			}
			if (m >= 100)
				_putchar(m  / 100 + '0');
			if (m >= 10)
				_putchar((m  / 10) % 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
