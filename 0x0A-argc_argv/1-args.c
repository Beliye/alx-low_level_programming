#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc__attribute__((unused)), char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
