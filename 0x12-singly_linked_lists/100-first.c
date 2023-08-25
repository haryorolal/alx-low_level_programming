#include <stdio.h>
#include <stdlib.h>
void printString(void) __attribute__((constructor));
/**
 * printString - function to print string
 * Return: returns void
 */
void printString(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
