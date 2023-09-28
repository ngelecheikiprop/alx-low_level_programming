#include "main.h"
/**
  *get_endianness - get it
  *
  *Return: int
  */
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *byte_pointer = (unsigned char *)&value;

	return (*byte_pointer == 1);
}
