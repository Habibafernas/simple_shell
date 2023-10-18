 #include "main.h"

/**
 * check - checks if the command is a builtin
 * @args: the arguments array
 *
 * Return: 1 if command is a builtin, 0 otherwise
 */
int check(char **args)
{
	if (!args[0])
		return (0);
	if (!_strcmp(args[0], "exit"))
		my_exit(args);
	else
		return (0);
	return (1);
}
