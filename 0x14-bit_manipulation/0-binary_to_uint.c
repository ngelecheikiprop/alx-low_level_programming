#include "main.h"
/**
  *binary_to_uint - changes binary to unsigned number
  *@b: string of binary
  *
  *Return: the unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; 
	/*unsigned int bit_value = 1;*/
	int index = 0;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		result = (result << 1) + (b[index] - '0');
		index++;
	}
	return (result);
}
