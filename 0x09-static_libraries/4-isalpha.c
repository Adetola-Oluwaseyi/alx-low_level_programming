#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character that is checked
 *
 * Return: 1 if character ia an alphabet
 * 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

