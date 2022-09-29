#include "main.h"

/**
 *  * incrementer - function to iterate through a number
 *   * @i: divisor
 *    * @n: number to divide
 *     * Return: 0 if divisor found, 1 if divisor not found
	*/

int incrementer(int i, int n)
{
	if (n % i == 0)
	{
		if (n == i) /* if it gets to n before finding a divisor, then it is prime*/
			return (1);
		else /*else it is not prime*/
			return (0);
	}
	else
		return (incrementer((i + 1), n)); /* while loop equivalent*/
}

/**
 *  * is_prime_number - function to do just what its name says
 *   * @n: number to check if prime
 *    * Return: 1 if prime, 0 if not
	*/

int is_prime_number(int n)
{

	if (n == 1)
		return (0);
	else if (n <= 0)
		return (0);
	else
		return (incrementer(2, n));
}
