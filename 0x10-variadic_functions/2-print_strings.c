#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - a function that prints strings followed by a newline
  * @separator: is the string to be printed between strings
  * @n: is the number of strings passed to the function
  * Return: returns nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator == NULL || (i + 1 == n))
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
