#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 *  * main - function to print number of arguments passed
 *   * @argc: number of arguments passed
 *    * @argv: vector of arguments passed
 *     * Return: 0
	*/


int main(int argc, char *argv[])
{

	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);

}
