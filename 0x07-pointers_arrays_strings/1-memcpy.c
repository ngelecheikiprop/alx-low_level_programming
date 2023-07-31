#include "main.h"
/**
  * _memcpy - copies memory area.
  *@dest: where to
  *@src: where to
  *@n: number to take
  *
  *Return: pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destination = dest;
	char *source = src;
	int number = (int)n;
	int i;

	for (i = 0; i < number; i++)
	{
		*(destination + i) = *(source + i);
	}
	return (dest);
}
