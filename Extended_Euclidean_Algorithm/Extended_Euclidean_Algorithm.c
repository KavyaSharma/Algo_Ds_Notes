#include <stdio.h>
 
// C function for extended Euclidean Algorithm
int gcdExtendedFunction(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtendedFunction(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
 
// Driver Program
int main()
{
    int x, y;
    int a = 98, b = 21;
    int ge = gcdExtendedFunction(a, b, &x, &y);
    printf("gcd(%d, %d) = %d, x = %d, y = %d",
           a, b, ge, x, y);
    return 0;
}

/* Output
   gcd(98, 21) = 7, x = -1, y = 5
*/