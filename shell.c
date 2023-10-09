#include "main.h"


int main(void)
{
	char command[120], *actual_command = NULL;

	while (1)
	{
		
		
		prompt();
		
		print_command(command, sizeof(command));
		actual_command = location(command);
		parsing(actual_command);
		
	}
	return (0);
}
