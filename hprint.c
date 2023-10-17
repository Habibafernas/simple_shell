#include "main.h"
/**
 * hprint - prints output
 * @m: the string
 */


void hprint(const char *m)
{
	write(STDOUT_FILENO, m, strlen(m));
}
