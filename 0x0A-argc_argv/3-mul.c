#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 *  * main - function to print number of arguments passed
 *   * @argc: number of arguments passed
 *    * @argv: vector of arguments passed
 *     * Return: 0
	*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
