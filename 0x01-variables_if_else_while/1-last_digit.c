#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;
	int K;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes here */
	K = n % 10;
	if (K < 0)
	{
		K = K * -1;
	}

	if (K > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, K);
	}

	else if (K == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, K);
	}

	else if (K < 6)
	{
		printf("%s %d is %d and is less than 6 and not zero\n", str, n, K);
	}

	return (0);
}
