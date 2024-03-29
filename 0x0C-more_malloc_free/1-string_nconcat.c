#include "main.h"
#include <stdlib.h>
int _count(char *);
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string whose n bytes are concatenated
 * @n: number of bytes copied from s2
 *
 * Return: pointer in memory containing concatenated strings
 * NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int count, i, j, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	count = _count(s1);
	count2 = _count(s2);

	count += n + 1;
	p = malloc(count * sizeof(*p));
	if (n >= count2)
		n = count2;
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}


/**
 * _count - computes size of an array
 * @str: pointer to array
 *
 * Return: size of array
 */
int _count(char *str)
{
	int count = 0;

	for (; str[count]; count++)
		continue;

	return (count);
}
