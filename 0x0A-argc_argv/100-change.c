#include <stdio.h>
#include <stdlib.h>
/**
  *main - get the number of cents
  *@argc: argument count
  *argv: argument vector
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int count = 0;
	int cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	if (cents >= 25)
	{
		count += cents / 25;
		cents = cents % 25;
	}
	if (cents >= 10)
	{
		count += cents / 10;
		cents = cents % 10;
	}
	if (cents >= 5)
	{
		count += cents / 5;
		cents = cents % 5;
	}
	if (cents >= 2)
	{
		count += cents / 2;
		cents = cents % 2;
	}
	if (cents == 1)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);

}

