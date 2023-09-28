#include "main.h"
/**
  *flip_bits - changes flips
  *@n: the number
  *@m: the m
  *
  *Return: unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r_xor = n ^ m;
	unsigned int count = 0;

	while (r_xor)
	{
		count += r_xor & 1;
		r_xor >>= 1;
	}
	return (count);
}
