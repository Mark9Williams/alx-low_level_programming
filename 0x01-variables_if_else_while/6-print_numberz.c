#include <stdio.h>
/**
 * main - This is the main program fuction
 * Return: returns 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
