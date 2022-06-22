#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @n: string to print
 */
void _puts_recursion(char *n)
{
	if (*n == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*n);
	_puts_recursion(n + 1);
}
