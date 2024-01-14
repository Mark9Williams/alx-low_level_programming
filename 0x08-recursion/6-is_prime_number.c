#include "main.h"
/**
  * is_prime_number - reurns 1 for input prime number, otherwise return 0
  * @n: place holder for a number
  * Return: returns an integer
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (checking_prime(n, n / 2));
	}
}
/**
  * checking_prime - checks if n is a prime
  * @n: place for a number to be checked if it is prime number
  * @i: place holder for a number to be decreased until when we conclude
  * Return: returns an integer
  */
int checking_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n / i == 0)
	{
		return (0);
	}
	else
	{
		return (checking_prime(n, i - 1));
	}
}
