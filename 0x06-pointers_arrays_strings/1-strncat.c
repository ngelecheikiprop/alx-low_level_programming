#include "main.h"
/**
 *_strncat -  concatenates two strings upto n
 *@dest: where it will be copied
 *@src: what to copy
 *@n: what to print
 *
 *Return: pointer to result
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

