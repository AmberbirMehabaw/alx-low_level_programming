#include "main.h"
#include <stdlib.h>

/**
 * count_word_len - Counts the length of the word.
 * @s: The word whose length to be counted.
 *  Return: Returns the length of the word.
 */

int count_word_len(char *s)
{
	int i = 0, len = 0;

	for (; s[i] && s[i] != ' '; i++)
		len++;

	return (len);
}

/**
 * count_words - Counts the number of words from the string.
 * @str: The string whose words to be counted.
 * Return: Returns the number of words.
 */

int count_words(char *str)
{
	int i = 0, word_count = 0, total_len = 0;

	for (; str[i]; i++)
		total_len += 1;

	for (i = 0; i < total_len; i++)
	{
		if (str[i] != ' ')
		{
			word_count += 1;
			i += count_word_len(str + i);
		}
	}

	return (word_count);
}
