#include "main.h"
/**
  *_sqrt - finds the square root
  *@n: number to find square root
  *@low: the lower side where square root might lie
  *@high: the upper side where square root might lie
  *
  *Return:the square root if found
  * -1 if sqyare root is not found
  */
int _sqrt(int n, int low, int high)
{
	int mid = (high + low) / 2;
	int square = mid * mid;

	if (low > high)
		return (-1);
	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt(n, mid + 1, high));
	else
		return (_sqrt(n, low, mid - 1));
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
	return (_sqrt(n , 0, n));
}
