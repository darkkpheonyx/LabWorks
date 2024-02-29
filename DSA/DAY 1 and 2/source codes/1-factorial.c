#include <stdio.h>
int facto(int n)
{
    static int fact=1;
    if (n == 0 || n == 1)
    
        return fact;
    else
        fact = n * facto(n - 1);
        
}
int main()
{
    int n;
    printf("\n.....FACTORIAL.....\n");
    printf("Enter an integer: ");
    scanf("%d", &n);
    int res = facto(n);
    printf("\nThe factorial of %d is: %d ", n, res);
    return 0;
}