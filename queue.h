#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct element {
	struct element *next;
	char *content;
};

struct list {
	struct element *first;
	struct element *last;
};

size_t strlen(char *string);

void *memcpy(char *dst, char *src, size_t len);

struct list *init (void);

int push (struct list *list, char *string);

/* This function returns and removes the last object in the list */
char *pop (struct list *list);

int kill (struct list *list);
