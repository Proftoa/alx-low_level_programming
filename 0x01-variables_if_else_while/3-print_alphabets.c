#include <stdio.h>

/**
 *  main - Prints the alphabet in lowercase, then in uppercase
 *
 *  Return: Always 0
 */
int main(void)
{
	char letter;

/* Using a for loop to iterate over the lowercase letters of the alphabet*/
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

/*Using a for loop to iterate over the uppercase letters of the alphabet*/
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

/* Used to print a new line*/
	putchar('\n');

	return (0);
}
