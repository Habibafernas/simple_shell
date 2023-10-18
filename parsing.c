#include "main.h"
/**
 * parsing - parsing the command
 * @command: the format string
 */


void parsing(char *command)
{
	pid_t pid = fork();
	char *arg[120], *actual_command = NULL;
	int val, count = 0;

	char *token = strtok((char *)command, " ");

	while (token != NULL)
	{
		arg[count++] = token;
		token = strtok(NULL, " ");
	}
	arg[count] = NULL;

	if (pid == -1)
	{
		hprint("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		actual_command = location(command);
		/*val = execvp(arg[0], arg);*/
		val = execve(actual_command, arg, NULL);
		if (val == -1)
		{
			hprint("Error executing command.\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
	prompt ();
}
