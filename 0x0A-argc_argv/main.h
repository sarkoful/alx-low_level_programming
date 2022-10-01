#ifndef MAIN_H
#define MAIN_H
/* using MAIN_H in place of main.h defining it as a 'macro'*/

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int power(int i, int n);
int incrementer(int i, int n);
#include <stdio.h>
#include <string.h>
#define UNUSED(x) (void)(x)

/**
 * _isdigit - function to check if the string is a digit
 * using the standard isdigit functionn in string.h
 * @s: string to check
 * Return: 1 if digit, 0 if not
 */

int _isdigit(char *s)
{
	int k, i;
	for  (k = 0; k != '\0'; k++)
	{
		i = 1;
		else
			i = 0;
	}

	return (1);
}


/**
 * main - function to print number of arguments passed
 * @argc: number of arguments passed
 * @argv: vecrtor of argument passed
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int i, j; /* i is a counter  and j is to house the sum*/
	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
		}
		else if (argc > 1 && _isdigit(argv[i]))
		{
			j += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", j);
	return (0);
}

#endif
