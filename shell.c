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
		print_command(command, sizeof(command));
		parsing(command);
		prompt();
	}
	return (0);
	}
