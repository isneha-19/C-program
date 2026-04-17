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
