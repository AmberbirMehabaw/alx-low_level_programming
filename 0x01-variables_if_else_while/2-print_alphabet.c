#include <stdio.h>
/**
 * main - prints alphabet characters from a to z in lowercase
 * Return: returns 0
 */

int main(void)
{
	char i;

	for ( i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	
	return (0);
}
