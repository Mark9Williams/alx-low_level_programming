#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: place holder for a number
 * Return: returns square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 0));
	}
}
/**
 * find_sqrt - returns square root of n
 * @n: place holder for a number
 * @i: place holder for a number to be incresed until we get the square root
 * Return: returns square of n
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}
