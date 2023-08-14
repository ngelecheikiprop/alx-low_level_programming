#include <stdio.h>
#include <stdio.h>
/**
  *print_dog - prints a struct dog
  *@d: pointer to structure
  *
  *Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
		exit();
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		prinft("Age: %d\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}
