#include "main.h"
/**
  *_is_prime_recursive - check if its divisible by any other number
  *@n: the number
  *@divisor: the divisor
  *
  *Return: 1 for divisible
  */
int _is_prime_recursive(int n, int divisor)
{
	if (divisor <= 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (_is_prime_recursive(n, divisor - 1));
}
/**
  *is_prime_number -checks if number is prime
  *@n: number to check
  *
  *Return: 1 for prime number
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_recursive(n, n - 1));
}
