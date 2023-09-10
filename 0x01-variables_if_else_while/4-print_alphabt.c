#include<stdio.h>
/**
 * main - this is the main function of the program
 * Return: returns 0
 */
/* program that prints alphabet in lowercase */
/* Excluding e and q */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar ('\n');
	return (0);
}
