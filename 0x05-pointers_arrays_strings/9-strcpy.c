#include "main.h"
/**
 *_strcpy - copies the string pointed to by src
 *@dest: destination
 *@src: source
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		*(dest + len) = src[len];
	}
	*(dest + len) = '\0';

	return (dest);
}
