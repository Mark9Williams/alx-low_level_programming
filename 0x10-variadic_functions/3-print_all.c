#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_all - functions that prints anything
  * @format: is the list of arguments passed to the function
  * Return: returns nothing
  */
void print_all(const char * const format, ...)
{
	char *str;
	int i;
	va_list args;
	char separator;

	i  = 0;
	separator = ',';
	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0 && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
			printf("%c ", separator);
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
