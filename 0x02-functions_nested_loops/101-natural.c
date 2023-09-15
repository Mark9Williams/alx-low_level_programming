#include "main.h"

/**
 * main - This is the main function of the program
 * Return: Always returns 0
 */

int main(void)
{
	int n = 3, sum = 0;

	for (n = 3; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	_putchar(sum / 100000 + '0');
	_putchar((sum / 10000) % 10 + '0');
	_putchar((sum / 1000) % 10 + '0');
	_putchar((sum / 100) % 10 + '0');
	_putchar((sum / 10) % 10 + '0');
	_putchar(sum % 10 + '0');
	_putchar('\n');
	return (0);
}
