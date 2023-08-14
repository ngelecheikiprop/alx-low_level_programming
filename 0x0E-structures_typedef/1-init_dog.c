/**
  * init_dog - intializes the structure of type dog
  *@d: pointer to structure
  *@name: name of the dog
  *@age:age of the dog
  *@owner: name of the owner
  *
  *Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
