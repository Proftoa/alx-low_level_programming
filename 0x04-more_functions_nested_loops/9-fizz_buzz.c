#include <stdio.h>

int main(void)
{
	int j;

for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", j);
		}
	}

	printf("\n");

	return 0;

}

