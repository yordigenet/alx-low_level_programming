#include <stdio.h>

void codefirst(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void codefirst(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
