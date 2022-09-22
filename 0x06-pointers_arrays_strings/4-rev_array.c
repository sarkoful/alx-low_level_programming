#include "main.h"

/**
 *  * reverse_array - function to reverse array
 *   * @a: array to be reversed
 *    * @n: number of elements in the array
 *     * Return: void, the reversed array
	*/

void reverse_array(int *a, int n)
{

	int tmp, index;
	for (index = n - 1; index > n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
