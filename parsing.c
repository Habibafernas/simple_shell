#include "main.h"


void parsing(const char *command)
{
	pid_t pid = fork();
	char *arg[120];
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
		
		/*val = execvp(arg[0], arg);*/
		val = execve(arg[0], arg, NULL);
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
}
