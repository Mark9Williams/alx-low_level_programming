#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times "\" should be printed
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n >= 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		if (i > 1)
		{
			j = 1;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
