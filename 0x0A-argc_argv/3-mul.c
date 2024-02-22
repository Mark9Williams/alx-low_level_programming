#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main function of the program
 * @argc: number of arguments
 * @argv: array of strings
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	return (0);
}
