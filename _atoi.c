#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @str: The string to convert.
 *
 * Return: The integer value.
 */
int _atoi(const char *str)
{
	int i, s;
	unsigned int number;

	i = 0;
	s = 1;
	number = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
			s *= -1;
		else if (str[i] >= '0' && str[i] <= '9')
			number = (number * 10) + (str[i] - '0');
		else
			break;
		i++;
	}
	return (number * s);
}


/**
 * free_last_input - Frees the most recent input.
 *
 * This function frees the memory allocated for the most recent input.
 */
void free_last_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t nread;
	static char *last_input;

	nread = getline(&input, &input_size, stdin);
	input[nread - 1] = '\0';

	while (input[0] == '\0')
	{
		last_input = input;
	}
	free(last_input);
	last_input = NULL;
}


/**
 * free_tokens - frees memory allocated dynamically
 * @p: pointer to allocated memory
 */
void free_tokens(char **p)
{
	int i;

	for (i = 0; p[i]; i++)
		free((p[i]));
	free(p);
}

/**
 * _strcmp - Compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Return: 0 if @s1 and @s2 are equal.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int) (*s1) - (*s2));
}
