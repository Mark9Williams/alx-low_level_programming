#include <stdio.h>
/**
  * before_main - a function that executes before the main function
  * Return: returns nothing
  */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n I bore my house upon my back!\n");
}
