/*
 * Copyright (C) 2014 Noel Kuntze <noel@familie-kuntze.de>
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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
