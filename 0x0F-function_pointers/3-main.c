#include "3-calc.h"
/**
  *main - test code
  *@argc: the number of arguments
  *@argv: the storage
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	fun = get_op_func(operator);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && ((strcmp(operator, "/") == 0) || strcmp(operator, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", fun(num1, num2));

	return (0);
}
