#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - the entry point
  *@argc: argument count
  *@argv: argument vector
  *
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc <= 1)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
