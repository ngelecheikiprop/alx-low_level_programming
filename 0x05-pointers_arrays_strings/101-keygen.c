#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - entry point
  *
  *Return: Nothing
  */
int main(void)
{
	char charSet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*(";
	int options = sizeof(charSet) - 1;
	int i;
	int takeIndex;
	char password[20];

	srand(time(NULL));
	for (i = 0; i < 20; i++)
	{
		takeIndex = rand() % options;
		password[i] = charSet[takeIndex];
	}
	password[10] = '\0';
	printf("Generated Password: %s\n", password);
	return (0);
}
