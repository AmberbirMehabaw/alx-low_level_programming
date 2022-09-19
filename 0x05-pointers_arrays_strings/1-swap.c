#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	
		*a = *a - *b;
		*b = *a + *b;
		*a = *b - *a;
}
