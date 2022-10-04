#include "main.h"

/**
 *  argstostr - concatenates all the arguments of your program.
 *
 *
 *    * @ac: arguments count
 *
 *     * @av: arguments vector
 * Return: a pointer to a new string, or NULL if it fails
 *
 */


char *argstostr(int ac, char **av)

{

	char *s;

	int i, j;

	int len;

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)

	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;

	}
}
