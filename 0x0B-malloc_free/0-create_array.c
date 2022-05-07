#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: character
 * Return: NULL if size = 0, a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
