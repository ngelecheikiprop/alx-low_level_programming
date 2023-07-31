#include "main.h"
/**
  *_memset -  fills memory with a constant byte.
  *@s: where to fill
  *@b: what to fill
  *@n: how many to fill.
  *
  *Return: Nothing
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int q = n;

	for (i = 0; i < q; i++)
	{
		*s++ = b;
	}

	return (s);
}
