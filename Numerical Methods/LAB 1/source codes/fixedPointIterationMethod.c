// fixed point iteration method
#include <stdio.h>
#include <math.h>
#define EPS 0.000001

float g(float x)
{
    // here g(x) isthe transformed function of f(x)
    return 1/(sin(x));
}
int main()
{

    float x0, x1;
    int n = 1;
    printf("Enter a valid initial points x0:\n");
    scanf("%f", &x0);
    x1 = g(x0);
    while (fabs((x1 - x0) / x1) > EPS)
    {
        n++;
        x0 = x1;
        x1 = g(x0);
        if (g(x1) == x1)
            break;
    }
    printf("The approximation root of given function is %f with %d number of iterations.", x1, n);
}