#include<stdio.h>

/**
 * main-print name of the program
 * @argc: number of command lines
 * @argv: The array name that holds the command line arguments
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", *argv);
	return (0);
}
