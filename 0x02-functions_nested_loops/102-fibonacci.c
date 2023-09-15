#include <stdio.h>

/**
 * main - This is the main function of the program
 * Return: always returns 0
 */

int main(void)
{
	int n1 = 1, n2 = 2, n3, n;

	printf("%d, %d", n1, n2);

	for (n = 3; n <= 50; n++)
	{
		n3 = n1 + n2;
		printf(", %d", n3);
		n1 = n2;
		n2 = n3;
	}
	printf('\n');

	return (0);
}
