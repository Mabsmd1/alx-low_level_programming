#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 through 9
 * prints the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int c = 0;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
