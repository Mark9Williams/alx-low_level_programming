#include <stdio.h>
#include "main.h"
/**
 * main - main function of the program
 * @argc: number of arguments
 * @argv: array of strings
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
