#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c is the char to print
 * Return 1 on Success & -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
