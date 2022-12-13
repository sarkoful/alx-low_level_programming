#include "main.h"

/**
 * _isdigit - check if uppercase
 * @c: parameter to be tested
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
