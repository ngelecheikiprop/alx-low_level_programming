#ifndef STRUCT
#define STRUCT
/**
  *struct dog - creating a dog structure
  *@name: name of the doge
  *@age: age of dong
  *@owner: name of owner
  *
  *Description: nothing to add
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
