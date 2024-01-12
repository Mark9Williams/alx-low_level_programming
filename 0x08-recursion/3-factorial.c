#include "main.h"
/**
  * factorial - returns factorial of a given number
  *@n: parameter for a number
  *Return: returns factorial of a number
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
