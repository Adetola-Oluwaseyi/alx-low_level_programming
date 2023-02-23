#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character that is checked
 *
 * Return: 1 if character is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
