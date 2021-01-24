/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>

int check(int n)
{
	int original = n;
	int reversed = 0;
	
	while (n > 0)
	{
		reversed = reversed*10 + n%10;
		n /= 10;
	}
	return original == reversed;
	
}


int main(void)
{
	int i = 999;
	int j = 999;
	int nb = 0;
	int answer = -1;

	while (i > 100)
	{
		nb = i * j;
		i--;
		printf("%d\n", nb);
		if (i == 100)
		{
			i = j;
			j--;;
		}
		check(nb);
		if (check(nb) && nb > answer)
		{
			answer = nb;
		}
	}

	printf("Result = %d", answer);	
	return(0);
}
