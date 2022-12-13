#include "main.h"

/**
 * _strspn - function to match strings from accept with part of s
 * the strspn function gives you the number of consecutive characters in
 * the first string, starting from the beginning, that are also in the
 * second string.
 * @s: first string
 * @accept: second string
 * Return: an integer number that counts from 1 to where accept stops
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (s[j] == '\0')
			return (counter);
	}
	return (counter);
}
