#include "main.h"

/**
 *  * power - function to get i*i (in determining square root)x
 *   * @i: number to multiply
 *    * @n: number we want to get square root of
 *     * Return: i*i if number is a square root of n, or (i+1)*(i+1) if not
 *      * stops iterating at n tho
	*/
int power(int i, int n)
{
	if ((i * i) == n)
		return (i); /* the number is the square root of n*/
	else if ((i * i) != n && ((i * i) < n))
		return (power((i + 1), n));
	else
		return (-1);
}

/**
 *  * _sqrt_recursion - function to get natural square root recursively
 *   * natural squareroot should  x such that x*x = n
 *    * @n: number to get the square root of
 *     * Return: sqrt of n or -1 if n does not have a natural square root
	*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (power(1, n));
}
