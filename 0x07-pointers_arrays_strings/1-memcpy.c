#include "main.h"
 /**
  * _memcpy - Copies n bytes from memory area src
  * @dest: destination of the copied memory
  * @src: source of the bytes copied
  * @n: number of bytes copied
  * Return: pointer to the copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]
	}
	_putchar('\n');
	return (dest);
}
