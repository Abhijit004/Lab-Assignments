#include<stdio.h>
struct complex{
    float real;
    float imag;
};

struct complex cadd(struct complex, struct complex);
struct complex csub(struct complex, struct complex);
struct complex cmulti(struct complex, struct complex);

int main(){
    struct complex a,b;
    printf("Enter real and imaginary part of complex 1: ");
    scanf("%f%f", &a.real, &a.imag);
    printf("Enter real and imaginary part of complex 2: ");
    scanf("%f%f", &b.real, &b.imag);
    struct complex add, sub, multi;
    add = cadd(a,b);
    sub = csub(a,b);
    multi = cmulti(a,b);
    printf("Addition: %.2f + (%.2f)i\n", add.real, add.imag);
    printf("Subtraction: %.2f + (%.2f)i\n", sub.real, sub.imag);
    printf("Multiplication: %.2f + (%.2f)i\n", multi.real, multi.imag);
    return 0;
}

struct complex cadd(struct complex a, struct complex b){
    struct complex x;
    x.real = a.real+b.real;
    x.imag = a.imag+b.imag;
    return x;
}

struct complex csub(struct complex a, struct complex b){
    struct complex x;
    x.real = a.real-b.real;
    x.imag = a.imag-b.imag;
    return x;
}

struct complex cmulti(struct complex a, struct complex b){
    struct complex x;
    x.real = a.real*b.real - a.imag*b.imag;
    x.imag = a.imag*b.real + a.real*b.imag;
    return x;
}
