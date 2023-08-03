#include "main.h"
#include <stdio.h>
/**
  *_sqrt - finds the square root
  *@n: starting number
  *@number: number
  *
  *Return:the square root if found
  * -1 if sqyare root is not found
  */
int _sqrt(int n, int number)
{
	int square = n * n;

	if (square == number)
		return (n);
	else if (square > number)
		return (-1);
	else
		return (_sqrt(n + 1, number));
}
/**
  * _sqrt_recursion - natural square root of a number.
  *@n: number
  *
  *Return: int
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
