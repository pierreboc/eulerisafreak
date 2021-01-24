/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

int main(void)
{
	long nb = 600851475143;
	long i = 1;
	long result = 1;

	while (i <= nb)
	{
		if (nb % i == 0)
		{
			result = i;
			nb = nb / i;
		}	
		i++;
	}
	printf("Résultat = %ld", result);
	return(0);
}
