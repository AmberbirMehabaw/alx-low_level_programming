#include "main.h"

/**
 * _strstr - Finds the firsst occurance of the substring
 * @haystack: The string to be searched
 * @needle: The sub string to be located
 * Return: Returns a pointer to the beginning of the located
 */

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return ('\0');
}
