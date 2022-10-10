<<<<<<< HEAD
#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
*_memset - fills memory with a constant byte
*
*@s: input pointer that represents memory block
*to fill
*@b: characters to fill/set
*@n: number of bytes to be filled
*
*Return: pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
*_calloc - function that allocates memory
*for an array using memset
*
*@nmemb: size of array
*@size: size of each element
*
*Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


/**
*multiply - initialize array with 0 byte
*
*@s1: string 1
*@s2: string 2
*
*Return: nothing
*/

void multiply(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);

/* store our pointer address to free later */
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
*main - Entry point
*
*Description: a program that multiplies
*two positive numbers
*
*@argc: number of arguments
*@argv: arguments array
*
*Return: 0 on success 98 on faliure
*/

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *   * int_calloc - special calloc but 4 int arrays
 *     * @nmemb: n memb
 *       * @size: size of array
 *         * Return: int *
	*/
int *int_calloc(int nmemb, unsigned int size)
{
	/* declarations */
	int *p, n;
	/* checking inputs */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* malloc the space & check for fail */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	/* calloc */
	for (n = 0; n < nmemb; n++)
		p[n] = 0;
	return (p);
}

/**
 *   * mult - multiplication
 *     * @product: int * 4 answer
 *       * @n1: string num1
 *         * @n2: string num2
 *           * @len1: len num1
 *             * @len2: len num2
 *               * Return: void
	*/
void mult(int *product, char *n1, char *n2, int len1, int len2)
{
	/* declarations */
	int i;
	int j;
	int f1, f2;
	int sum;
	/* the long math */
	for (i = len1 - 1; i >= 0; i--)
	{
		sum = 0;
		f1 = n1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			f2 = n2[j] - '0';
			sum += product[i + j + 1] + (f1 * f2);
			product[i + j + 1] = sum % 10;
			sum /= 10;
		}
		if (sum > 0)
			product[i + j + 1] += sum;
	}
	for (i = 0; product[i] == 0 && i < len1 + len2; i++)
	{}
	if (i == len1 + len2)
		_putchar('0');
	for (; i < len1 + len2; i++)
		_putchar(product[i] + '0');
	_putchar('\n');
}

/**
 *   * is_valid - is the number a valid one
 *     * @num : char string num
 *       * Return: int, 1 if true 0 if false
	*/
int is_valid(char *num)
{
	/* declarations */
	int i;
	/* checking for ints */
	for (i = 0; num[i]; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}
/**
 *   * err - errors r us
 *     * @status: error code 4 exit
 *       * Return: void
	*/
void err(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}
/**
 *   * main - getting the args
 *     * @argc: args #
 *       * @argv: arg array
 *         * Return: 0
	*/
int main(int argc, char **argv)
{
	/* declarations */
	int i, j, len1 = 0, len2 = 0;
	int *res;
	/* too many args? too few? */
	if (argc != 3)
	{
		err(98);
	}
	/* using isvalid */
	for (i = 1; i < argc; i++)
	{
		if (!(is_valid(argv[i])))
			err(98);
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				len1++;
		}
		if (i == 2)
		{
			for (j = 0; argv[i][j]; j++)
				len2++;
		}
	}
	res = int_calloc(len1 + len2, sizeof(int));
	if (res == NULL)
		err(98);
	mult(res, argv[1], argv[2], len1, len2);
	free(res);
>>>>>>> 602f3839cb5d9f4909b048c411cc1db44321fd9a
	return (0);
}
