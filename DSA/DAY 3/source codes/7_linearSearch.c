// wap for Binary search
#include <stdio.h>
int number[50];
int linearSearch(int total, int temp)
{
    for (int i = 0; i < total; i++)
    {
        if (number[i] == temp) // if number is found the exit the for loop
        {
            return (i + 1);
        }
    }
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

        // linear search starts here
        int res = linearSearch(total, temp);
        if (res == 0)
            printf("Number not found");
        else
            printf("Number found at index %d", res - 1);
        printf("\nDo you want to continue(y/n)?");
        fflush(stdin);
        char choice;
        scanf("%c", &choice);
        if (choice != 'y' && choice != 'Y')
            exit(0);
    }
}