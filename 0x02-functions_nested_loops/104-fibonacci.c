#include <stdio.h>

/**
 * main - This is the main function of the program
 * Return: Always returns 0
 */

int main(void)
{
	double n1 = 1, n2 = 2, n3, n;

	printf("%.0f, %.0f", n1, n2);

	for (n = 3; n <= 98; n++)
	{
		n3 = n1 + n2;
		printf(", %.0f", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
