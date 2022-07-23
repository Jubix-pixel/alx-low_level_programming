#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The nnumber of arguments supplied to the programme.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
