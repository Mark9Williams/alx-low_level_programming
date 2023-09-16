#include "stdio.h"

/**
  * print_to_98 - prints all numbers from a given number to 98
  * Return: returns nothing
  * @n: stores any number which you can start from
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		printf("%d", n);
		while (n > 98)
		{
			n--;
			printf(", %d", n);
		}

		putchar('\n');
	}
	else
	{
		printf("%d", n);
		while (n < 98)
		{
			n++;
			printf(", %d", n);
		}
		printf("\n");
	}
}
