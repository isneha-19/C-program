// question 1
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int n1, n2, i;
    printf("Enter initial size n1: ");
    scanf("%d", &n1);
    arr = (int *)malloc(n1 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter additional size n2: ");
    scanf("%d", &n2);
    arr = (int *)realloc(arr, (n1 + n2) * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    printf("Enter %d more elements:\n", n2);
    for (i = n1; i < n1 + n2; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array after expansion:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
// question 2
#include<stdio.h>
void toh(int n, char src, char aux, char dest) {
    if(n > 0) {
        toh(n-1,src,dest,aux);
        printf("%c --> %c\t",src,dest);
        toh(n-1,aux,src,dest);
    }
}
int main() {
    int n;
    printf("Enter total no.s of discs :");
    scanf("%d",&n);
    toh(n,'A','B','C');
}
// Enter DOB using Structure
#include<stdio.h>
struct data {
    int dd,mm,yy;
};
int main() {
    struct data dob;
    char month[12][3] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    printf("Enter dob(day-month-year)");
    scanf("%d-%d-%d",&dob.dd,&dob.mm,&dob.yy);
    printf("Your DOB is : \n");
    printf("%d/%d/%d\n",dob.dd,dob.mm,dob.yy);
    printf("%d-%s-%d",dob.dd,month[dob.mm-1],dob.yy);
    return 0;
}
