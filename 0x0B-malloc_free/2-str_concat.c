#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: First string
 * @s2: second string
 *
 * Return: NULL in case of failure , but pointer to new string in
 * case of success
 */

char *str_concate(char *s1, char *s2)
{
	char *concate_str;
	int index, concate_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concate_str = malloc(sizeof(char) * len);

	if (concate_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concate_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concate_str[concate_index++] = s2[index];

	return (concate_str);
}
