#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: pointer
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
