#include "main.h"

/**
 * _strpbrk - Locates the first occurance in the string s
 * @s: The string to be searched
 * @accept: The string consisted bytes to be searched for
 * Return: Returns a pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] > '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
