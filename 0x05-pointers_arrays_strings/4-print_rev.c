#include "main.h"

/**
 * print_rev - print strings in reverse
 * @s: an argument
 */
void print_rev(char *s)
{
	int length = 0;
	int index;

	while (*(s + length) != '\0')
	{
		length++;
	}

	index = length - 1;

	while (index >= 0)
	{
		_putchar(*(s + index));
		index--;
	}

	_putchar('\n');
}
