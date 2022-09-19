#include "main.h"

/**
 * swap_int - swaps two integers
 * @a & @b : pointers passed as an argument to swap_int
 */

void swap_int(int *a, int *b)
{
	int *c;

	c = a;
	a = b;
	b = c;
}
