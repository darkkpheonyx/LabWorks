#include <stdio.h>

void insertionSort(int A[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
    printf("\nThe sorted data is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
}

int main()
{
    printf("......Insertion Sort......\n");
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
    insertionSort(numbers,terms);
    return 0;
}
