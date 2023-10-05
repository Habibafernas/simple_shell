#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void hprint(const char *m);
void prompt(void);
void print_command(char *command, size_t s);
void parsing(const char *command);










#endif
