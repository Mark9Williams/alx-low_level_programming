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
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
