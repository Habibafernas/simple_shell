#include "main.h"


void parsing(const char *command)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		hprint("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *arg[120];
		int count = 0;

		char *token = strtok((char *)command, " ");

		while (token != NULL)
		{
			arg[count++] = token;
			token = strtok(NULL, " ");
		}
		arg[count] = NULL;

		execvp(arg[0], arg);
		
		/*execvp(arg[0], arg);*/
		hprint("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
