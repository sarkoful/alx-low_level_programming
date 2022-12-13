#include "main.h"

/**
 * _strchr - function to return the pointer to the first occurence
 * of char c in string s, or NULL if the character is not found
 * @s : char string to search through
 * @c : char to search for
 * Return: s
 */

char *_strchr(char *s, char c)
{

	unsigned int i;

	for (i = 0; s[i] != '\0'; i++) /*check through the string*/
	{
		if (s[i] == c) /*at first occurence of c, break!*/
		{
			break;
		}
	}
	if (s[i] == c)
		return (s + i); /*return memory location for first occurence*/
	return (0); /*else return 0/null */
}
