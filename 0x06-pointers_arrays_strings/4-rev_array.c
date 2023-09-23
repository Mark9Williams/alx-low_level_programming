#include "main.h"

/**
 * reverse_array - reverses the content of array of integers
 * @n: number of elements of the array
 * @a: points to the array
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
