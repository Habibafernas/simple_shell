#include"main.h"
/**
 * print_command - prints the command
 * @command: the command
 * @s: the size
 */

void print_command(char *command, size_t s)
{
	if (fgets(command, s, stdin) == NULL)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			hprint("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
