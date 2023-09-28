#include "main.h"
/**
  *set_bit - sets a bit
  *@n: number
  *@index: the index to set
  *
  *Return: nothing
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
