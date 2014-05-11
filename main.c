#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "queue.h"

int main (void) {
	struct list *list = init();

	push(list, "123");
	push(list, "456");
	push(list, "789");

	char *string;
	while((string = pop(list))!=NULL) {
		printf("Last element in the list: %s\n", string);
		free(string);
	}
	push(list, "foo");
	push(list, "bar");
	push(list, "test123");
	push(list, "test456");
	
	while ((string = pop(list)) != NULL) {
		printf("Last element in the list: %s\n", string);
		free(string);
	}
	push(list, "test");
	push(list, "123");
	while ((string = pop(list)) != NULL) {
		printf("Last element in the list: %s\n", string);
		free(string);
	}
	kill(list);

	return 0;
}
