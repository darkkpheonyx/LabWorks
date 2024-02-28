#include <stdio.h>
#include <math.h>
#define MAX 15
int main()
{
    float x[MAX], fx[MAX], fd[MAX], xp, s, h, v, p;
    int n, i, j;
    char q;
    printf("Enter the number of data pairs:\n");
    scanf("%d", &n);
    printf("Enter data pairs x(i) and values f(i) (one set at a time):\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f %f", &x[i], &fx[i]);
    }
    h = x[2] - x[1];
    do
    {
        fflush(stdin);
        printf("Enter the values at which interpolation is required:");
        scanf("%f", &xp);
        s = (xp - x[1]) / h;
        p = 1;
        v = fx[1];
        for (i = 1; i <= n; i++)
            fd[i] = fx[i];
        for (i = 1; i <= n - 1; i++)
        {
            for (j = 1; j <= n - i; j++)
            {
                fd[j] = fd[j + 1] - fd[j];
            }
            p = p * (s - i + 1) / i;
            v = v + p * fd[1];
        }
        printf("\nInterpolated function value at x=%0.2f is %f\n", xp, v);
        fflush(stdin);
        printf("Do you want to continue? (y/n):");
        scanf("%c", &q);
    } while (q == 'y' || q == 'Y');
    return 0;
}
