#include <stdio.h>

/**
 * main - This is the main function of the program
 * Return: always returns 0
 */

int main(void)
{
	long long n1 = 1, n2 = 2, n3, n;

	printf("%lld, %lld", n1, n2);

	for (n = 3; n <= 50; n++)
	{
		n3 = n1 + n2;
		printf(", %lld", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");

	return (0);
}
