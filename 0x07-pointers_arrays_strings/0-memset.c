#include "main.h"

/**
 *  * _memset - function to fill first n bytes of the memory area
 *   * pointed to by s with the constant byte b
 *    * @s: destination where byte is filled
 *     * @b: byte to fill into destination
 *      * @n: number of bytes to copy i.e. stop copying at n
 *       * Return: s
	*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);

}
