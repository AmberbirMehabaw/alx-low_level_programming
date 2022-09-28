#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: The number to be computed
 * Return: return -1 if n has no a natural square root, otherwise
 * it returns the square root of n.
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n>1)
	{
		if (r * r == n)
			return (r);
		if (r == n / 2)
			return (-1);
		r++;
		return _sqrt_recursion(n);
	}
}
