#include <stdio.h>

int main(void)
{
	int squaresum = 0;
	int sumsquare = 0;
	int i = 1;
	int y = 1;

	while (i < 101)
	{
		squaresum += i;
		i++;
	}
	
	squaresum = squaresum * squaresum;
	
	while (y < 101)
	{;
		sumsquare += y * y;
		y++;
	}

	printf("%d", squaresum - sumsquare);
	
	return(0);
}
