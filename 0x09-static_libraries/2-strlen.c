#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is found
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j += 1;
	}

	return (j);
}

