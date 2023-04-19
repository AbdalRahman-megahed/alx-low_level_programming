#include "main.h"
/**
 * _puts_recursion - A function that prints a string followed by a new line.
 * @s: A pointer to the string entered.
 */

void _puts_recursion(char *s)
{
	_putchar(*s++);
	if (!*s)
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s);
	}
}
