#include <stdio.h>
#define UNUSED(x) (void)(x)
#include "main.h"

/**
 *  * main - function to print the name of the function
 *   * @argc: number of arguments passed into program
 *    * @argv: vector of the arguments i.e contents of the string
 *     * Return: 0
	*/

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
