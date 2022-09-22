#include "main"

/**
 * rot13 - encrypts the string to its rot13 version
 * @s: a string argument to be encrypted
 * Return: returns a pointer to encrypted message
 */

char *rot13(char *s)
{
	int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			{
				s[i] = s[i] + 13;
				break;
			}
		}
	}

	return (s);
}
