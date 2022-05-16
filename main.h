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
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int execute(char **cmd);
int main(int argc, char **argv);

#endif
