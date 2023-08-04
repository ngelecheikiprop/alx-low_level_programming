#include <stdio.h>
/**
  * main - entry point of the program
  *@argc:count
  *@argv: vector
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
