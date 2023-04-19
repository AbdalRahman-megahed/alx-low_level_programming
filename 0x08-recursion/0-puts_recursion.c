#include "main.h"
/**
 * _puts_recursion - A function that prints a string followed by a new line.
 * @s: A pointer to the string entered.
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	_putchar(*s++);
	_puts_recursion(s);

}
