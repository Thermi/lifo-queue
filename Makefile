#
# Copyright (C) 2014 Noel Kuntze <noel@familie-kuntze.de>
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 3 as published by
# the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

CC=LANG=C gcc
RM=rm
CFLAGS=-std=c11 -Wall -g -ggdb -Og -march=native -fbuiltin -Wstrict-prototypes -Wreturn-type -Wsequence-point -pedantic -Wextra -fstack-protector-all -p


all: queue stack

queue: queue.c
	$(CC) $(CFLAGS) queue.c main.c -o queue

stack: stack.c
	$(CC) $(CFLAGS) stack.c -o stack
clean:
	./remove.sh
