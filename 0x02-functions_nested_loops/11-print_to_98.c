#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: inital number
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		printf("%d", n);
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}

	else
	{
		printf("%d", n);
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}

	printf("\n");
}

