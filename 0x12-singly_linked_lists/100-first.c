#include <stdio.h>

/*
 * __attribute__((constructor)) : a syntax that runs the printf function before the main function is executed.
 * preceding: a function that prints a dialog
 * Return: 0 for succeses excution, non-zero otherwise
 */
void __attribute__((constructor)) preceding();

void preceding();
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return(0);
}
