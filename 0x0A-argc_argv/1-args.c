#include <stdio.h>
#include "main.h"
/**
  *main  - entry point
  *@argc: argument  count
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
