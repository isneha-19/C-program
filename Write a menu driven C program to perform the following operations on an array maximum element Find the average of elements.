#include <stdio.h>

void increase(int *x) 
{
    *x = *x + 1;   
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function call, value = %d\n", num);

    increase(&num);   

    printf("After function call, value = %d\n", num);

    return 0;
}

#include<stdio.h>

void swap_no(int *a, int *b) {
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

int main() {
    int d,e;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&d,&e);
    printf("Before swap d is %d & e is %d \n",d,e);
    swap_no(&d,&e);
    printf("After swap d is %d & e is %d ",d,e);
    return 0;
}

#include <stdio.h>


void Array(int arr[], int n)
{
    int i;
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int Sum(int arr[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int Min(int arr[], int n)
{
    int i, min = arr[0];
    for(i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int Max(int arr[], int n)
{
    int i, max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int Avg(int arr[], int n)
{
    int sum = Sum(arr, n);
    return sum / n;
}

int menu()
{
    int choice;
    printf("MENU \n");
    printf("1. Sum \n");
    printf("2. Minimum \n");
    printf("3. Maximum \n" );
    printf("4. Average \n");
    printf("5. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int arr[100], n, choice, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    inputArray(arr, n);   

    do
    {
        choice = menu();

        switch (choice)
        {
            case 1:
                result = Sum(arr, n);
                printf("Sum = %d", result);
                break;

            case 2:
                result = Min(arr, n);
                printf("Minimum = %d", result);
                break;

            case 3:
                result = Max(arr, n);
                printf("Maximum = %d", result);
                break;

            case 4:
                result = Avg(arr, n);
                printf("Average = %d", result);
                break;

            case 5:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice! Try again.");
        }

    } 
    while (choice != 5);

    return 0;
}
