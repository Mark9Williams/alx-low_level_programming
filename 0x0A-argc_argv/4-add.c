#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - main function of the program
 * @argc: number of arguments
 * @argv: array of strings
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int sum, i, j, word_len;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		word_len = strlen(argv[i]);
		for (j = 0; j < word_len; j++)
		{
			if (atoi(argv[i][j]) < '0' && atoi(argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
