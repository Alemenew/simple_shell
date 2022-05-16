#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int _putchar(char c);
void _puts(char *str);
unsigned int count_spaces(char *s);
char **_strtok(char *str);

#endif
