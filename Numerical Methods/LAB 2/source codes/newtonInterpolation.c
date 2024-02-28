#include <stdio.h>
#include <math.h>
#define MAX 15
int main()
{
    int i, j, n;
    float xp, fp, sum, pi, x[MAX], f[MAX], a[MAX], d[MAX][MAX];
    char q;
    printf("Enter the number of data pairs:");
    scanf("%d", &n);
    printf("\nEnter data pairs x(i) and values f(i) (one set in each line)\n");
    for (i = 1; i <= n; i++)
        scanf("%f %f", &x[i], &f[i]);

    // construct difference table
    for (i = 1; i <= n; i++)
        d[i][1] = f[i];
    for (j = 2; j <= n; j++)
    {
        for (i = 1; i <= n - j + 1; i++)
            d[i][j] = (d[i + 1][j - 1] - d[i][j - 1]) / (x[i + j - 1] - x[i]);
    }

    // set the coefficients of interpolation polynomial
    for (j = 1; j <= n; j++)
        a[j] = d[1][j];

    // compute interpolation value
    do
    {
        printf("\nEnter x at which interpolation is required:");
        fflush(stdin);
        scanf("%f", &xp);
        sum = a[1];
        for (i = 2; i <= n; i++)
        {
            pi = 1.0;
            for (j = 1; j <= i - 1; j++)
                pi = pi * (xp - x[j]);
            sum = sum + a[i] * pi;
        }
        fp = sum;
        // write results
        printf("\nInterpolated function value at x=%f is %f.", xp, fp);
        printf("\nDo you want to input another value?(y/n):");
        fflush(stdin);
        scanf("%c", &q);
    } while (q == 'y' || q == 'Y');
    return 0;
}