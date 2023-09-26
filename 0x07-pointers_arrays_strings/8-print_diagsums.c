#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: It points the square matrix
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, major = 0, minor = 0;

	for (i = 0; i < size; i++)
	{
		major += a[i * size + i];
		minor += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", major, minor);
}
