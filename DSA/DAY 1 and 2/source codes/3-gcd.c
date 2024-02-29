#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    printf('....GCD CALCULATOR....\n');
    printf("\nEnter two numbers: ");
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n1 < n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    printf("The GCD of %d and %d is: %d", n1, n2, gcd(n1, n2));
}