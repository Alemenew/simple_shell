#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
void _puts(char *str);
unsigned int count_spaces(char *s);
char **strtok(char *str);

#endif
