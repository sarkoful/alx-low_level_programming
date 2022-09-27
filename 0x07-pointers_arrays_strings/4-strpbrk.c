#include "main.h"

/**
 * _strpbrkn - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string t check against
 *
 * Return:npointer to byte in s that matches orNUUL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
	if (accept[j])
		return (s + i);
	}
return (0);
}

