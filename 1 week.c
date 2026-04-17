#include <stdio.h>

/* function declarations */
long int factorial(int n);
long int permutation(int n, int r);
long int combination(int n, int r);

int main()
{
    int n, r, choice;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n)
    {
        printf("Invalid input: r cannot be greater than n\n");
        return 0;
    }

    printf("\n1. Permutation (nPr)");
    printf("\n2. Combination (nCr)");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Permutation (nPr) = %ld\n", permutation(n, r));
            break;

        case 2:
            printf("Combination (nCr) = %ld\n", combination(n, r));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
