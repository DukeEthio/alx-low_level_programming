#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded) that the multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;
	For (i = 0; 1 < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}