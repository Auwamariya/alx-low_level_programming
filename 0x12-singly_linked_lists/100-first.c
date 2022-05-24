#include <stdio.h>

/**
 * printfirst - print before main
 *
 * Return: void
 */
void printfirst(void) __attribute__ ((constructor));
void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
