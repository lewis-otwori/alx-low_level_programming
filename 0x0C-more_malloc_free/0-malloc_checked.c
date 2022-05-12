#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: unsigned integer
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *set;

	set = malloc(b);
	if (set == NULL)
	{
		exit(98);
	}
	return (set);
}
