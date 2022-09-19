#include "main.h"

/**
 * puts2 - prints every character in a different way
 * @str: a string argument to be printed
 */

void puts2(char *str)
{
	int length;

	for (length = 0; *(string+length) != '\0';)
	{
		_putchar(str[length]);
		length +=2;
	}
	_putchar('\n');
}
