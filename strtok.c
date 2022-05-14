#include "main.h"

/**
 * count_spaces - return the number of occurrent of a string
 * @s: string to check
 * Return: int
 */

unsigned int count_spaces(char *s)
{
	int i, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			sum++;
	}
	return (sum);
}

/**
  *strtok - split a sentence into multiple words.
  *@str: the string passed as argument.
  *Return: tokens
  */
char **strtok(char *str)
{
	int i = 0;
	const char delim[] = " ";
	int spaces = count_spaces(str);
	char **tokens = malloc(sizeof(char *) * (spaces + 1));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "sh: allocation error\n");
		exit(1);
	}

	token = strtok(str, separator);

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	token[i] = NULL;

	return (tokens);
}
