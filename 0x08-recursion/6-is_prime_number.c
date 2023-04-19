#include "main.h"
/**
 * _some_function - help finding prime.
 * @a: input 1.
 * @b: input 2.
 * @n: the number we try to check.
 * Return: depends on the condition.
 */

int _some_function (int a, int b,int n)
{
	if (n == 1 || (a * b) == n)
	{
		return (0);
	}
	else
	{
		if ((a * b) > n)
		{
			_some_function(a, b - 1, n);
		}
		else if ((a * b) < n)
		{
			_some_function(a + 1, b, n);
		}
		else if ((a + 1) * b == n)
		{
			return (1);
		}

	}
	return (1);
}

/**
 * is_prime_number - checkes if prime number.
 * @n: the number we try to check.
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (_some_function (1, n - 1, n));
}
