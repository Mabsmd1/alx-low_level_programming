#include "main.h"

/**
 * _islowe - check if char is lowercase
 * @c: The char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
