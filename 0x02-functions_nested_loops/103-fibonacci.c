#include <stdio.h>

/**
 * main - This is the main function of the program
 * Return: Always returns 0
 */

int main(void)
{
	long n1 = 1, n2 = 2, n3 = 0, sum = 2;

	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
			sum += n3;
		n1 = n2;
		n2 = n3;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
