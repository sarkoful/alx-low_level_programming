#include "main.h"

/**
 *  * reverse_array - function to reverse array
 *   * @a: array to be reversed
 *    * @n: number of elements in the array
 *     * Return: void, the reversed array
	*/

void reverse_array(int *a, int n)
{

	int i;
	int j;
	int b[n];

	for (i = 0; i < n; i++)
	{
		b[i] = a[n - i - 1];
	}
	for (j = 0; j < n; j++)
	{
		a[j] = b[j];
	}
}
