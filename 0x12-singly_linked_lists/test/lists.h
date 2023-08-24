#ifndef MAIN_H
#define MAIN_H
typedef struct list_t *nodePtr;

struct list_t
{
	char *str;
	int len;
	nodePtr next;
};

typedef struct list_t list_t;

#endif
