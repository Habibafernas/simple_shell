#include "main.h"
/**
 * _exit - exits the terminal
 * @arg: the argument
 * @line: line
 * @_exit: exit
 */


int _exit(char **arg, char *line, int _exit)
{
	int status = 0;

	if (!arg[1])
	{
	free(line);
	free(arg);
	exit(_exit);
	}
	status = atoi(arg[1]);

	free(line);
	free(arg);
	exit(status);
}
