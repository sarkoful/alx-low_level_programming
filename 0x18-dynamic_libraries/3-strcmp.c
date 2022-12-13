#include "main.h"

/**
 * _strcmp - function to compare two strings
 * if s1 = s2, it returns 0, and the difference
 * if s1 != s2
 * @s1: first string
 * @s2: second string
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);

}
