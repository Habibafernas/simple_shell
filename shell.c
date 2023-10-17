#include "main.h"
/**
 * main - main function
 * Return: return 0
 */

int main(void)
{
	char command[120];

	while (1)
	{
		prompt();
		print_command(command, sizeof(command));
		parsing(command);
	}
	return (0);
	}
