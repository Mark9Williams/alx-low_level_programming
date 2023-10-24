#include "main.h"
/**
 * print_square - prints a square followed by a newline
 * @size: is the size of the square
 * Return: returns nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}