#include "main.h"
/**
  *binary_to_uint - changes binary to unsigned number
  *@b: string of binary
  *
  *Return: the unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	size_t j = 0;
	int mul = 1;
	unsigned int currNum = 0;
	unsigned int decNum = 0;

	if (b == NULL)
		return (0);
	while (j < strlen(b))
	{
		mul = mul * 2;
		j++;
	}
	mul = mul / 2;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			currNum = 1 * mul;
			decNum = currNum + decNum;
			mul = mul / 2;
		}
		else if(b[i] == '0')
		{
			currNum = 0 * mul;
			mul = mul / 2;
			decNum = decNum + currNum;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (decNum);
}
