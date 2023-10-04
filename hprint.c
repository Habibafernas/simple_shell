#include "main.h"

void hprint(const char *m)
{
	write(STDOUT_FILENO, m, strlen(m));
}
