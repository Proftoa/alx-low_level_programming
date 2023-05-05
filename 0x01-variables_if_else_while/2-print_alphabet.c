#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

/* I use a for loop to iterate over the lowercase letters of the alphabet*/
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

/*I  call putchar again with the '\n' character to print a new line.*/	
	putchar('\n');
	return (0);
}
