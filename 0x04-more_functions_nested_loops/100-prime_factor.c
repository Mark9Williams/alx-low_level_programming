#include "main.h"
/**
 * main - finds and prints the largest prime factor
 * largest_prime_factor: finds the largest prime factor
 * Return: always returns 0
 */
/**
 * is_prime - checks if a given value is prime
 * @n: placeholder for a vale
 * Return: returns an integer
 */

int main(void)
{
	unsigned int i, n;

	int is_prime(unsigned int n)
	{
		if (n < 1)
			return (0);
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				return (0);
		}
		return (1);
	}

	unsigned int largest_prime_factor(unsigned int n)
	{
		largest = 2;
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0 && is_prime(i))
			{
				largest = i;
			}
		}
		return (largest);
	}
	n = 612852475143;
	printf("%u\n", largest_prime_factor(n);
}
