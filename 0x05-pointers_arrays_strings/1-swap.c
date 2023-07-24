#include "main.h"
/**
 * swap_int -swaps two numbers
 *@a: first number
 *@b: second number
 *
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int holda;
	int holdb;

	holda = *a;
	holdb = *b;
	*b = holda;
	*a = holdb;
}
