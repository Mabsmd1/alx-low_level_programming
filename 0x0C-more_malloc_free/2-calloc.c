#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocated memorial for nmemb element size bytes
 * @nmemb: number of element in the array
 * @size: bytes for each position in array
 * Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmeb == 0 || size == 0)
		return (NULL);

	p = malloc(nmeb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmeb * size; i++)
		p[i] = 0;

	return (p);
}
