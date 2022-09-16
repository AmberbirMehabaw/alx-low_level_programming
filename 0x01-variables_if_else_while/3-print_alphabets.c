#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints alphabets in both lower and upper cases
 * Return: returns 0
 */

int main(void)
{
	char s, C;

	for (s = 'a'; s <= 'z'; s++)
	{
	putchar(s);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
