#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array to be created
 * @c: The character to be filled in the array
 * Return: returns NULL if the size is 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array_to_store_c;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array_to_store_c = malloc(sizeof(char) * size);

	if (array_to_store_c == NULL)
		return (NULL);
	for (; i < size; i++)
		array_to_store_c[i] = c;

	array_to_store_c[size] = '\0';

	return (array_to_store_c);

}
