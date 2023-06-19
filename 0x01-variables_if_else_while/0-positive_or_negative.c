#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random is positive, negative or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
	{
		printf("%d is %s\n", n, "postitive");
	}
        else if (n == 0)
	{
		printf("%d is %s\n", n, "zer");
	}	
        else
	{
		printf("%d is %s\n", n, "negative");
	}
	return (0);
}
