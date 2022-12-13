#include "main.h"

/**
 * _strncat - function to append string
 * @dest: destination string
 * @src: Source string
 * @n: number of bytes from src to be copied
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);

}
