#include <stdio.h>
int bubbleSort(int A[], int n, int choice)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("Pass %d:\n", i + 1);
        // bubble sort logic
        for (int j = 0; j < n - i - 1; j++)
        {
            if (choice == 1) // ascending
            {
                if (A[j] > A[j + 1])
                {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
            else // descending
            {
                if (A[j] < A[j + 1])
                {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
            for (int j = 0; j < n; j++)
            {
                printf("%d, ", A[j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n\nThe sorted data is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
    printf("\n");
}
int main()
{
    printf("......Bubble Sort......\n");
    printf("Enter the no. of terms to be sorted: ");
    int terms;
    scanf("%d", &terms);
    int numbers[terms];
    printf("Enter the numbers to be sorted: ");
    for (int i = 0; i < terms; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("\nHow do you want to sort?\n");
    printf("1.Ascending\n");
    printf("2.Descending\n");
    printf("\nEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    printf("\nThe original data is:\n");
    for (int i = 0; i < terms; i++)
    {
        printf("%d, ", numbers[i]);
    }
    printf("\n");
    if (choice == 1)
        bubbleSort(numbers, terms, 1);
    else if (choice == 2)
        bubbleSort(numbers, terms, 2);
    else
        printf("\nNo option found.");
}