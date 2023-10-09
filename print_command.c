#include"main.h"

void print_command(char *command, size_t s)
{
	if (fgets(command, s, stdin) == NULL)
	{
		if (feof(stdin))
		{
			hprint("\n");
			exit(EXIT_SUCCESS);

		}
		else
		{
			hprint("ERROR");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
