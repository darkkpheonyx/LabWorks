// testing and completing pending
#include <stdio.h>
#include <math.h>
#define MAX 10
void normal(float x[MAX], float y[MAX], float c[MAX][MAX], float b[MAX], int n, int m)
{
    int i, j, k, l1, l2;
    for (j = 1; j <= m; j++)
    {
        for (k = 1; k <= m; k++)
        {
            c[j][k] = 0.0;
            l1 = k + j - 2;
            for (i = 1; i <= n; i++)
                c[j][k] = c[j][k] + pow(x[i], l1);
        }
    }
    for (j = 1; j <= m; j++)
    {
        b[j] = 0.0;
        l2 = j - 1;
        for (i = 1; i <= n; i++)
            b[j] = b[j] + y[i] * pow(x[i], l2);
    }
    return;
}

void gauss(int n, float a[MAX][MAX], float b[MAX], float x[MAX])
{
    int i, j, k;
    float pivot, factor, sum;
    for (k = 1; k <= n - 1; k++)
    {
        pivot = a[k][k];
        for (i = k + 1; i <= n; i++)
        {
            factor = a[i][k] / pivot;
            for (j = k + 1; j <= n; j++)
                a[i][j] = a[i][j] - factor * a[k][j];
            b[i] = b[i] - factor * b[k];
        }
    }
    x[n] = b[n] / a[n][n];
    for (k = n - 1; k >= 1; k--)
    {
        sum = 0.0;
        for (j = k + 1; j <= n; j++)
            sum = sum + a[k][j] * x[j];
        x[k] = (b[k] - sum) / a[k][k];
    }
    return;
}

int main()
{
    int n, mp, m, i;
    float x[MAX], y[MAX], c[MAX][MAX], a[MAX], b[MAX];

    // reading values
    printf("\nEnter number of data points:");
    scanf("%d", &n);
    printf("\nEnter degree of required polynomial:");
    scanf("%d", &mp);
    printf("\nEnter x and y values (one set at a time):\n");
    for (i = 1; i <= n; i++)
        scanf("%f %f", &x[i], &y[i]);

    // number of polynomial coeffiecients
    m = mp + 1;

    // computaiton of coeffiecient a(1) to a(n)
    normal(x,y,c,b,n,m);

    //computaion of coefficient a(1) to a(m)
    gauss(m,c,b,a);

    //printing of coefficients a(i)
    printf("\nPolynomial Coefficients \n\n");
    for(i=1;i<=m;i++)
    printf("%15.6f",a[i]);
    return 0;
}