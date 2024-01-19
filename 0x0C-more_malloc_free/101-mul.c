#include <stdio.h>
#include <stdlib.h>
/**
  * print_number - prints a number
  * @num: character to be printed
  * Return: returns nothing
  */
void print_number(char *num)
{
	while (*num == '0' && *(num + 1) != '\0')
	{
		num++;
	}

	while (*num)
	{
		_putchar(*num);
		num++;
	}
}

/**
  * is_digit - checks if a given a character
  * @c: checks if a character is a digit
  * Return: returns 0 or 1 for true or false
  */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
  * multiply - multtiplies two numbers
  * @num1: first number to be multiplied
  * @num2: second number to be multplied
  * @len1: length of first number
  * @len2: length of the second number
  * Return: returns a ponter to the product
  */
int *multiply(char *num1, char *num2, int len1, int len2)
{
	int *result, i, j, carry, prod, len;

	len = len1 + len2;
	result = malloc(sizeof(int) * len);
	if (result == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	for (i = 0; i < len; i++)
	{
		result[i] = 0;
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (i = len1 - 1; i >= 0; j--)
		{
			prod = (num[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = prod % 10;
			carry = prod / 10;
		}
		result[i + j + 1] = carry;
	}
	return (result);
}

/**
  * main - It is where the program starts
  * @argc: number of argumets
  * @argv: array of arguments
  * Return: returns an integer
  */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len 1, len2, *result, i;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	num1 = arg[1];
	num2 = arg[2];

	len1 = 0;
	while (is_digit(num1[len1]))
	{
		len++;
	}

	len = 0;
	while (is_digit(num2[len2]))
	{
		len2++;
	}

	if (len1 == 0 || len2 == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	result = multiply(num1, num2, len1, len2);

	if (result[0] == 0)
	{
		print_number(reult + 1);
	}
	else
	{
		print_number(result);
	}

	_putchar('\n');
	free(result);

	return (0);
}

