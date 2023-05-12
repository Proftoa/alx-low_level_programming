#include <stdio.h>
#include <string.h>

int main()
{
	char src [] = "First, solve the problem. Then, write the code\n";
	char dest [98];
	int length = strlen(src);

	strcpy(dest, src);

	printf("%s\n", src);
	printf("%s\n", dest);
	printf("Length of: %d\n", length);

	return 0;
}
