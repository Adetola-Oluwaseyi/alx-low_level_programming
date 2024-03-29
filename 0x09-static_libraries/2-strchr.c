#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string that is searched
 * @c: character that is searched for
 *
 * Return: pointer to first occurence of character
 * in the string; NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}

