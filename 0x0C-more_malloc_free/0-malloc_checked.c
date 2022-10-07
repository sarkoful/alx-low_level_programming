#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to check location to pointer
 * @b: parameter to the function
 * Return: Shouldn't return anything :( but returns t, which is a void format
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
