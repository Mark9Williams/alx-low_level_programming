#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the opcodes of itself.
  * @argc: The number of arguments supplied to the program
  * @argv: An array of pointers to arguments
  * Return: Always returns 0
  */
int main(int argc, char *argv[])
{
	int byts, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byts = atoi(argv[1]);
	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < byts; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (index == byts - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}

