#include <stdio.h>
void quickSort(int A[], int l, int r)
{
    if (l < r)
    {
        int pivot = partition(A, l, r);
        quickSort(A, l, pivot - 1);
        quickSort(A, pivot + 1, r);
    }
}

int partition(int A[], int l, int r)
{
    int pivot = A[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    return i + 1;
}

int main()
{
    printf("......Quick Sort......\n");
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
    quickSort(numbers, 0, terms - 1);
    printf("\nThe sorted data is:\n");
    for (int i = 0; i < terms; i++)
    {
        printf("%d, ", numbers[i]);
    }
    return 0;
}