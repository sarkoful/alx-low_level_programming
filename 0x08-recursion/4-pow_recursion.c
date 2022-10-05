#include "main.h"
/**
 *  * _pow_recursion - function to get x raised to the power of y
 *   * @x: the number
 *    * @y: the power
 *     * this is relatively simple when the logic has been explained
 *      * Return: x to the power of y, else -1 (when y < 0)
	*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
