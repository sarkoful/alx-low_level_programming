#include "main.h"

/**
 * _isalpha - function to determine if a character is an alphabet
 *@c: parameter passed to the function
 *Return: 1 or c
 */

int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}

	else
		return (0);

}
