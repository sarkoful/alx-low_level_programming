#include "main.h"

/**
 * _isupper - check if uppercase
 * @c: integer passed into function
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
