#include <stdio.h>
/**
 * main - This is the main function of a program
 * Return: returns 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n - 10 + 'a');
		}
	}
	return (0);
}
