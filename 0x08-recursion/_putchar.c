#include <unistd.h>

/**
 *putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 * Description -Perform the function of printf in stdio.h
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 */

	int _putchar(char c)

{

	return (write(1, &c, 1));

}
