#include "monty.h"

/**
 * main - main function.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int stat;

	stat = control_monty(argc, argv);
	printf("\n %d \n", stat);
	return (0);
}