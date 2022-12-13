#include "main.h"

/**
 * _strncpy - function to copy string
 * @dest: destination location
 * @src: Source string
 * @n: number of bytes from src to be copied
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
/* if after all of src is copied, there is space in n*/
/*then add '\0' to the remaining spaces*/
		dest[i] = '\0';
	}
	return (dest);
}
