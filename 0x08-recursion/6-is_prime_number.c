#include "main.h"

int test(int n, int check);

/**
 * is_prime_number- checks if n is prime number
 * @n: number to be checked
 * Return: return 1 if n is prime or -1 if not
 */
int is_prime_number(int n)
{
	int check = 2;

	if (n <= 1)
		return (0);
	return (test(n, check));
}
/**
 * test - tests whether the number is divisible or not.
 * @check: The divisor
 * Return: returns 0 if the number is divisible,
 * otherwise it returns 1
 */

int test(int n, int check)
{
	if (n % check == 0)
		return (0);
	if (check == n / 2)
		return (1);
	return (test(n, check + 1));
}
