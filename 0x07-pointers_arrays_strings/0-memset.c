#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory
 * @b: constant byte
 * @n: number of bytes to be filled with byte b
 * Return: returns pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	_putchar('\n');
	return (s);
}
