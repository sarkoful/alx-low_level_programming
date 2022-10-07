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
>>>>>>> e5a6e7a0a4d1105919466172cf51e8150e57c498

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
