// This is algorithm for Bisection method
#include <stdio.h>
#include <math.h>
#define EPS 0.000001 // for error validation
/*like if the question says upto 5 significant number then EPS becomes 0.00001
 */
float f(float x)
{
    return 2*x+3*cos(x)-exp(x); // function given in the question
}
int main()
{
    float a, b, c;
    int n = 0;
    do
    {
        printf("Enter two valid initial points a and b:\n");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) >= 0);
    do
    {
        n++;
        c = (a + b) / 2;
        if (f(c) == 0)
            break;
        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    } while (fabs((b - a) / a) > EPS);
    // fabs function is to find the absoulte values
    //  if x < 0 then -ve
    //  if x > 0 then +ve
    printf("The approximation root of given function is %f with %d number of iteration:", c, n);
    return 0;
}