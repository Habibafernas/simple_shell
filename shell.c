#include "main.h"


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
