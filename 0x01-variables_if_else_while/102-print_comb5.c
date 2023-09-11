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
			putchar((i / 10) + '0'); /*tens place of i */
			putchar((i % 10) + '0'); /*ones place of i */
			putchar(' ');

			putchar((j / 10) + '0'); /*tens place of j */
			putchar((j % 10) + '0'); /*ones place of j */

			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
