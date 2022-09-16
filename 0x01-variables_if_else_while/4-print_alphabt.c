#include <stdio.h>
#include <stdlib.h>
/**
 *  main - prints all alphabets in lowercase except letters q and e.
 *  Return: returns 0
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; z++)
	{
		if (c =='q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
