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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
