#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string argument
 */
void puts2(char *str)
{
	int i, j, count;

	count = 0;
	if (s[0] != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			count = i;
		}

		count -= 1;
		for (j = -2; j <= count ; j += 2)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
