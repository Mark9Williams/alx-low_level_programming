#include <stdio.h>
/**
 * main - This is the main program of the function
 * Return: returns 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i + '0');
			putchar(i + '0');
			putchar(' ');
			putchar(j + '0');
			putchar(j + '0');

			if (i == 98 && j == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
