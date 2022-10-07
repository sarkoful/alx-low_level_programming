#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
<<<<<<< HEAD
 *  * malloc_checked - function to check location to pointer
 *   * @b: parameter to the function
 *    * Return: Shouldn't return anything :( but returns t, which is a void format
	*/
=======
 * malloc_checked - function to check location to pointer
 * @b: parameter to the function
 * Return: Shouldn't return anything :( but returns t, which is a void format
 */
>>>>>>> 44dcb89c4b24629c2d16feda378c41589f71f970

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
