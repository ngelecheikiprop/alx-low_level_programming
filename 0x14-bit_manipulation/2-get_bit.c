#include "main.h"
/**
  *get_bit - gets a bit
  *@index: where
  *@n: number
  *
  *Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
