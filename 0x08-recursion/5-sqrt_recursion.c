#include "main.h"

/**
 * some_help - a function helps to calc square root.
 * @a: input 1.
 * @b: input 2.
 * Return: some value depends on the condition.
 */

int some_help(int a, int b)
{
	if ((a * a) == b)
	{
		return (a);
	}
	else
	{
		if ((a * a) > b)
			return (-1);
		else
			return (some_help(a + 1, b));
	}
}

/**
 * _sqrt_recursion - a function returns the natural square root of a number.
 * @n: input number.
 * Return: the whole number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (some_help(0, n));
}
