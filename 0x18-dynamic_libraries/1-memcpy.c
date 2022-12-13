#include "main.h"

/**
 * _memcpy - function to copy n bytes from memeory area src to dest
 * @dest: destination of the bytes
 * @src: source of the bytes
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}
