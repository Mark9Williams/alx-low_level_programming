#include "main.h"
/**
 * print_triangle - prints a triangle followed by a newline
 * @size: is the size of the trianle
 * returns nothing
 */
void print_triangle(int size)
{
	int i = 1, j = 1, k;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		while (j <= size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 1;
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}
