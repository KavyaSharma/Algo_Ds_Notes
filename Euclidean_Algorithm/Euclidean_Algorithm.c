#include <stdio.h>

int gcdFunction( int x, int y)
{
    if(x == 0)
        return y;
    else
        return gcdFunction(y % x, x);
}

int main(void)
{
	int x, y;   // 2 nos. whose gcd we've to find
	x = 462, y = 780;
	printf("GCD of numbers %d and %d is %d \n ",x,y,gcdFunction(x,y));

	return 0;
}

/* Output

GCD of numbers 462 and 780 is 6 

*/
