#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific character
 * @size: size of the array
 * @c: character used to initialize array
 *
 * Return: pointer to array created
 * NULL if size of array is 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(*p) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

