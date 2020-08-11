#include<stdio.h>

int main()
{
	unsigned int n = 600851475143, max;
	int x[400000];
	x[0] = 0;
	for (unsigned int i = 1; i <= 400000; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			x[i] = i;
			if (x[i] > x[i - 1])
			{
				max = x[i];
			}
		}
		else
		{
			x[i] = 1;
		}
		if (i > n)
		{
			i = 600000;
		}
	}
	printf("Result: %d", max);
	return 0;
}