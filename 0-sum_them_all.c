#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - a function that returns the sum of all its parameters
  * @n: number of arguments passed
  * Return: returns sum of its parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
