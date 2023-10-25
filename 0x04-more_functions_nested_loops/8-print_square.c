#include "main.h"
/**
 * print_square - prints a square followed by a newline
 * @size: is the size of the square
 * Return: returns nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
