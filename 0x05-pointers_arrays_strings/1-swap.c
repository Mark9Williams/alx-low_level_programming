#include "main.h"
/**
 * swap_int - Swaps values of two integers
 * @a: The first integer to be swapped with the second
 * @b: The second integer to be swapped with the first one
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
