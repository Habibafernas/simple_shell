#include "main.h"

/**
 * my_exit - Exit the shell.
 * @args: Arguments.
 *
 */
void my_exit(char **args)
{
	int s = 0;

	if (args[1] != NULL)
	{
		s = _atoi(args[1]);
	}
	free_tokens(args);
	free_last_input();
	exit(s);
}
