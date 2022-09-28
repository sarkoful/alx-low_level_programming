#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y
 * @c: number to be used
 * @y: exponent to be used
 *
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
