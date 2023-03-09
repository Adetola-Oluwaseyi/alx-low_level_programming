#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string that is printed
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
