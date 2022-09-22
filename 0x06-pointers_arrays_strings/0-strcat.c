<<<<<<< HEAD
#include "main.h"

/**
 *  * _strcst - concatenates the string pointed to by @src to
 *   * the end of the string pointed to by @dest
 *    * @dest: String that will be appended
 *     * @src: String to be concatenate upon
 *      *
 *       * Return: returns poiner to @dest
=======
#include "main.hi"

/**
 * _strcst - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenate upon
 *
 * Return: returns poiner to @dest
>>>>>>> d0594d2cbbd659095fa20ebdec533fa5a48cb94a
	*/

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;
<<<<<<< HEAD

=======
	
>>>>>>> d0594d2cbbd659095fa20ebdec533fa5a48cb94a
	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] =src[index];

	return (dest);
}
