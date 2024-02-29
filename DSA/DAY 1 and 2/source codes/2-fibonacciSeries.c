#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}
void output(int n)
{
    printf(" %d,", n);
}
int main()
{
    printf("\n....FIBONACCI SERIES....\n");
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The fibonacci series is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", fibo(i));
    }
}

