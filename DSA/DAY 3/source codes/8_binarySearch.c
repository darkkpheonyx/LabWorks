// wap for Binary search
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int number[50];
int binarySearch(int A[], int l, int r, int key)
{
    int flag = 0;
    int mid = fabs((l + r) / 2);
    if (l <= r)
    {
        if (A[mid] == key)
            flag = 1;
        else if (A[mid] < key)
            return binarySearch(A, mid + 1, r, key);
        else
            return binarySearch(A, l, mid - 1, key);
    }
    if (flag == 1)
    {
        printf("Index of number is: %d\n", (mid));
        return 1;
    }
    else
        return 0;
}
int main()
{
    int total, temp; // to store the number to be sarched on the array
    printf("Enter the total no. of data:");
    scanf("%d", &total);
    printf("\nEnter the data now (Ascending order only):\n");
    int tempTotal = total, i = 0;
    for (int i = 0; i < total; i++)
    {
        scanf("%d", &number[i]);
    }
    while (1)
    {
        // logic starts from here
        printf("\nEnter the number to be searched on the array: ");
        scanf("%d", &temp);

        // binary search starts here
        int res = binarySearch(number, 0, total, temp);
        if (res == 1)
            printf("Search is found");
        else
            printf("Search is not found.");

        printf("\nDo you want to continue(y/n)?");
        fflush(stdin);
        char choice;
        scanf("%c", &choice);
        if (choice != 'y' && choice != 'Y')
            exit(0);
    }
}