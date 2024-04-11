#include <stdio.h>
void shellSort(int A[], int n)
{
    for (int gap = n / 2; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j < n; j++)
        {
            for (int i = j - gap; i >= 0; i -= gap)
            {
                if (A[i + gap] > A[i])
                    break;
                else
                {
                    int temp = A[i + gap];
                    A[i + gap] = A[i];
                    A[i] = temp;
                }
            }
        }
    }
    printf("\nThe sorted data is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
}

int main()
{
    printf("......Shell Sort......\n");
    printf("Enter the no. of terms to be sorted: ");
    int terms;
    scanf("%d", &terms);
    int numbers[terms];
    printf("Enter the numbers to be sorted: ");
    for (int i = 0; i < terms; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("\nThe original data is:\n");
    for (int i = 0; i < terms; i++)
    {
        printf("%d, ", numbers[i]);
    }
    printf("\n\n");
    shellSort(numbers, terms);
}