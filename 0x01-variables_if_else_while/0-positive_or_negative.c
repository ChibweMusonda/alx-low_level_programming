#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point in the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your the code goes there*/
	if (n > 0)
	{
		printf("%i is positive＼n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero＼n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative＼n", n);
	}
	return (0);
}
