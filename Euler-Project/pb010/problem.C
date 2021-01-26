/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>

int is_prime(unsigned long long int num)
{
	if (num <= 1) 
		return 0;
	if (num % 2 == 0 && num > 2) 
		return 0;
     	for(int i = 3; i < num / 2; i+= 2)
	{
        	if (num % i == 0)
			return 0;
     	}
	return 1;
}

int main(void)
{
	unsigned long long int i = 1;
	unsigned long long int sum = 0;
	int y = 0;

	while (i < 2000000)
	{
		y = is_prime(i);
		if (y == 1)
		{
			sum += i;
		}
		i++;
		printf("%llu\n", i);
	}	
	printf("%llu", sum);
	return (0);
}
