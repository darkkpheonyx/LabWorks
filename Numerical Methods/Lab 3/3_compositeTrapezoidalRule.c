// Integrating a funciton using Composite Trapezoidal Rule
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return exp(-x * x);
}

int main()
{
    int n, i;
    char choice;
    float a, b, h, sum = 0.0, ict;
    do
    {
        printf("Composite Trapezoidal Rule");
        printf("\n Give lower & upper limit of integration a,b:");
        scanf("%f %f", &a, &b);
        printf("\n Give the segment width h:");
        scanf("%f", &h);
        n = (b - a) / h;
        for (i = 1; i <= n - 1; i++)
            sum = sum + 2 * f(a + i * h);
        sum = sum + f(a) + f(b);
        ict = sum * h / 2;
        printf("\n Integration between %f and %f when h = %f is %f.", a, b, h, ict);
        printf("\nDo you want to input another value? (y/n):");
        fflush(stdin);
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
