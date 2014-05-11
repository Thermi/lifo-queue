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
