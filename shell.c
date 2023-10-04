#include "main.h"


int main(void)
{
	while(1)
	{

		char command[120];
		prompt();
		print_command(command, sizeof(command));
	
	}
	return (0);
}
