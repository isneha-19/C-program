// ques 1
#include<stdio.h>
typedef struct 
{
    float real;
    float imag;
}complex;
void input(complex *n);
void display(complex n);
complex Add(complex a, complex b);
complex Sub(complex a, complex b);
complex Mul(complex a, complex b);

void main()
{
    complex n1, n2, res;
    input(&n1);
    input(&n2);
    res = Add(n1, n2);
    printf("\nAddition Result: ");
    display(res);
    res = Sub(n1, n2);
    printf("\nSubstraction Result: ");
    display(res);
    res = Mul(n1, n2);
    printf("\nMultiplication Result: ");
    display(res);
}
void input(complex *n)
{
   printf("enter a complex number (real,imag):");
   scanf("%f,%f",&n->real,&n->imag); 
}
void display(complex n)
{
    printf("%.2f+%.2f i", n.real,n.imag);
}
complex Add(complex a, complex b)
{
    complex r;
    r.real = a.real+b.real;
    r.imag = a.imag+b.imag;
    return r;
}
complex Sub(complex a, complex b)
{
    complex r;
    r.real = a.real-b.real;
    r.imag = a.imag-b.imag;
    return r;
}
complex Mul(complex a, complex b)
{
    complex r;
    r.real = (a.real*b.real)-(a.imag*b.imag);
    r.imag = (a.real*b.imag)+(a.imag*b.real);
    return r;
}
// ques 2
struct Student{
    char name[50];
    int roll_no;
    char mobile_no[15];
    float CGPA;
    char DoB[15];
    char course[40];
    int year;
};
void readStudent(struct Student *s)
{
    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);
    printf("Enter Roll No: ");
    scanf("%d", &s->roll_no);
    printf("Enter Mobile No: ");
    scanf(" %s", s->mobile_no);
    printf("Enter CGPA: ");
    scanf("%f", &s->CGPA);
    printf("Enter Date of Birth (DD/MM/YYYY): ");
    scanf(" %s", s->DoB);
    printf("Enter Course: ");
    scanf(" %[^\n]", s->course);
    printf("Enter Year: ");
    scanf("%d", &s->year);
}
void displayStudent(struct Student s)
{
    printf("Student Details");
    printf("Name : %s\n", s.name);
    printf("Roll No : %d\n", s.roll_no);
    printf("Mobile No : %s\n", s.mobile_no);
    printf("CGPA : %.2f\n", s.CGPA);
    printf("DoB : %s\n", s.DoB);
    printf("Course : %s\n", s.course);
    printf("Year : %d\n", s.year);
}
int main()
{
    struct Student students[N];
    int i, topperIndex = 0;
    printf("Enter details of %d students:\n\n", N);
    for (i = 0; i < N; i++) 
    {
        printf("Student %d:\n", i + 1);
        readStudent(&students[i]);
        printf("\n");
    }
    for (i = 1; i < N; i++) 
    {
        if (students[i].CGPA > students[topperIndex].CGPA) 
        {
            topperIndex = i;
        }
    }
    printf("==\n");
    printf("Topper of the class:\n");
    displayStudent(students[topperIndex]);
    return 0;
}
