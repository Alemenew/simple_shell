#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <signal.h>

/**
 * struct variables - varables
 * @av: command line arguments
 * @buffer: buffer of command
 * @env: enviroment varables
 * @count: count of commands enterd
 * @argv: arguments at opening of shell
 * @status: exit status
 * @commands : commands
 */

typedef struct variables
{
	char **av;
	char *buffer;
	char **env;
	size_t count;
	char **argv;
	int status;
	char **commands;
} vars_t;


int _putchar(char c);
void _puts(char *str);
unsigned int count_spaces(char *s);
char **_strtok(char *str);
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int execute(char **cmd);
int main(int argc, char **argv);
char **make_env(char **env);
void free_env(char **env);
unsigned int _strlen(char *str);
char *_strcat(char *strc1, char *strc2);
int _strcmpr(char *strcmp1, char *strcmp2);
char *_strdup(char *strtodup);

#endif
