/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>

int    my_is_prime(int nb)
{
	int i = 2;

	if ((nb % 2 == 0 && nb != 2) || nb <= 1)
        	return (0);
    	while (nb % i != 0 && i <= nb / 2) 
	{
        	i++;
	}
	if (nb % i != 0 || i == nb)
        	return (1);
    	return (0);
}

int main(void)
{
	int i = 0;
	int y = 0;
	int cmpt = 0;
	
	while (1)
	{
		y = my_is_prime(i);
		if (y == 1)
		{
			cmpt++;	
		} 
		if (cmpt == 10001)
		{
			printf("%d", i);
			break;
		}
		i++;
	}
	return(0);
}
