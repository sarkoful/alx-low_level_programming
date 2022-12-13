#include "main.h"

/**
 * _islower - function to test for lower case characters
 * @c: argument passed into function
 * Return: 1 or C
 */

int _islower(int c)
{

	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
