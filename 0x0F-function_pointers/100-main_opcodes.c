#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes
 * @bytes: bytes given by the user
 *
 * Return: nothing
 */
void print_opcodes(const void* address, int size)
{
	unsigned char *ptr = (unsigned char *)address;
	int i;

	for (i = 0; i < size; i++)
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
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(&main, bytes);
	return (0);
}

