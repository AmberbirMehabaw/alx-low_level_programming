#include "main.h"

/**
 * print_rev - print strings in reverse
 * @s: an argument
 */

void print_rev(char *s)
{
	int length;
	int index;
	while (*s != '\0')
	{
		length++;
		s++;
	}
`	
	index = length - 1;
	
	while (index >= 0)
	{
		_putchar(*(s + index))
		index--;
	}
	_putchar('\n');
}
