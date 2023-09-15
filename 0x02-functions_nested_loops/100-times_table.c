#include "main.h"
/**
 * print_times_table - prints the n times table
 * Return: returns nothing
 * @n: character that stores the number whose time table is required
 */
void print_times_table(int n)
{
	int row, column, m;

	for (row = 0; row <= n; row++)
	{
		if (n > 15 || n < 0)
			break;
		for (column = 0; column <= n; column++)
		{
			m = row * column;
			if (m > 9 && m < 100)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				if (column < n)
				{
					_putchar(',');
					if ((row * (column + 1)) > 99)
					{
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			else if(m > 99)
			{
				_putchar((m / 100) + '0');
				_putchar(((m / 10) % 10) + '0');
				_putchar((m % 10) + '0');
				if (column < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(m + '0');
				if (column < n)
				{
					_putchar(',');
					if ((row * (column + 1)) > 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
