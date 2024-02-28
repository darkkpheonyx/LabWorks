#include <stdio.h>
#include <math.h>
#define MAX 15
int main()
{
    float x[MAX], fx[MAX], bd[MAX], xp, s, h, v, p;
    int n, i, j, k;
    char q;
    printf("Enter the number of data pairs:\n");
    scanf("%d",&n);
    printf("Enter data pairs x(i) and values f(i) (one set at a time):\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f %f", &x[i], &fx[i]);
    }
    h = x[2] - x[1]; //difference
    do
    {
        fflush(stdin);
        printf("Enter the values at which interpolation is required:");
        scanf("%f", &xp);
        s = (xp - x[n]) / h;
        p = 1;
        v = fx[n];
        for (i = 1; i <= n; i++)
            bd[i] = fx[i];
        for (i = n, k=1; i >=1,k<n; i--, k++)
        {
            for (j = n; j >= n - i; j--)   //j>=n-i or j>=n-1
            {
                bd[j] = bd[j] - bd[j-1];
            }
            p = p * (s + k - 1) / k;
            v = v + p * bd[n];
        }
        printf("\nInterpolated function value at x=%0.2f is %f\n", xp, v);
        fflush(stdin);
        printf("Do you want to continue? (y/n):");
        scanf("%c", &q);
    } while (q == 'y' || q == 'Y');
    return 0;
}
