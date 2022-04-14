#include "main.h"

/**
 * _isalpha - returns 1 if c is the uppercase or lowercase.
 * @c: integer to be tested.
 * Return: 1 0r 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
