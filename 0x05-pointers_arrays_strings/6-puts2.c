#include "main.h"

/**
 * puts2 - prints every character in a different way
 * @str: a string argument to be printed
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		_putchar(str[length]);
		}
	}
	_putchar('\n');
}
