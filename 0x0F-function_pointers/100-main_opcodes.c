#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes
 * @bytes: bytes given by the user
 *
 * Return: nothing
 */
void print_opcodes(int bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", *ptr);
		ptr++;
	}
	printf("\n");
}
/**
 * main - entry point
 * @argc: count of arguments
 * @argv:the vector having arguments
 *
 * Return: a number
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(bytes);
	return (0);
}

