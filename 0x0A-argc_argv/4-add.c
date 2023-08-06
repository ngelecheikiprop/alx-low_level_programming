#include <stdio.h>
#include <stdlib.h>
/**
  *main -  adds two numbers
  *@argc: the count of arguments given
  *@argv: the vector of arguments as strings
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int number;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			number = atoi(argv[i]);
			sum += number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
