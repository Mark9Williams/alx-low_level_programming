#include "math.h"
#include "stdio.h"
/**
 * main - finds and prints the largest prime factor
 * Return: always returns 0
 */
int main(void)
{
	long int m;
	long int max;
	long int i;

	m = 612852475143;

	max = 2;

	for (i = 3; i <= sqrt(m); i = i + 2)
	{
		while (m % i == 0)
		{
			max = i;
			m = m / i;
		}
	}
	if (m > 2)
	max = m;

	printf("%ld\n", max);
	return (0);
}
