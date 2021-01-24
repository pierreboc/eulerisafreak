/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 1;
	int i = 0;
	int sum = 0;
	int tmp = 0;

	printf("1 \n");
	while (sum < 4000000)
	{
		sum = a + b;
		printf("%d \n", sum);
		if (sum % 2 == 0)
		{
			tmp += sum;
		}
		a = b;	
		b = sum; 
		i++;	
	}
	printf("Somme chiffre pair = %d", tmp);
	return(0);
}
