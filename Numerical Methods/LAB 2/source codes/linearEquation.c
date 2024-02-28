#include <stdio.h>
#include <math.h>
#define MAX 10
int main()
{
    int i, n;
    float x[MAX], y[MAX];
    float sumx = 0.0, sumy = 0.0, sumxx = 0.0, sumxy = 0.0, xmean, ymean, denom, a, b;
    // reading data values
    printf("Enter number of data points:");
    scanf("%d", &n);
    printf("\nEnter x and y values (one set at a time)\n");
    for (i = 1; i <= n; i++)
        scanf("%f %f", &x[i], &y[i]);

    // computing constansts a and b
    for (i = 1; i <= n; i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxx = sumxx + x[i] * x[i];
        sumxy = sumxy + x[i] * y[i];
    }
    xmean = sumx / n;
    ymean = sumy / n;
    denom = n * sumxx - sumx * sumx;
    b = (n * sumxy - sumx * sumy) / denom;
    a = (ymean - b * xmean);
    printf("\nThe line that is fit to the given data is y=%f + %fx.", a, b);
    return 0;
}