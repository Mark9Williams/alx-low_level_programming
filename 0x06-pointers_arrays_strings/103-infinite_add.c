#include "main.h"
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r:the buffer that will store the result
 * @size_r: is the buffer size
 * Return: returns a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, index_n1 = strlen(n1) - 1, index_res = 0, sum;
	int index_n2 = strlen(n2) - 1, i, j, digit_sum, digit_n1, digit_n2;

	while (index_n1 >= 0 || index_n2 >= 0)
	{
		digit_n1 = (index_n1 >= 0) ? (n1[index_n1] - '0') : 0;
		digit_n2 = (index_n2 >= 0) ? (n2[index_n2] - '0') : 0;
		sum = digit_n1 + digit_n2 + carry;

		carry = sum / 10;
		digit_sum = sum % 10;

		if (index_res < size_r - 1)
		{
		r[index_res] = digit_sum + '0';
		index_res++;
		}
		else
		{
			return (0);
		}
		index_n1--;
		index_n2--;
	}
	if (carry > 0)
	{
		if (index_res < size_r - 1)
		{
		r[index_res] = carry + '0';
		index_res++; }
		else
		{
			return (0);
			}
	}
	r[index_res] = 0;
	for (i = 0, j = index_res - 1; i < j; i++, j--)
	{
	int temp = r[i];

	r[i] = r[j];
	r[j] = temp;
	}
	return (r);
}
