#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void hprint(const char *m);
void prompt(void);
void print_command(char *command, size_t s);
void parsing(char *command);
char *location(char *command);
void free_tokens(char **p);
void free_last_input(void);
int _atoi(const char *str);
void my_exit(char **args);
int check(char **args);
int _strcmp(const char *s1, const char *s2);











#endif
