#include <stdio.h>

void swap(int *, int *);

int main(){
    int a , b;
    printf("enter a and b: "); scanf("%d %d", &a, &b);
    printf("a = %d   b = %d\n",a,b);
    swap(&a, &b);
    printf("After Swapping:\na = %d   b = %d\n",a,b);
    return 0;
}

void swap(int *x, int *y){
    int p = *x;
    *x = *y;
    *y = p;
    /*Or, in a single line*/
    //*x ^= *y ^ (*y = *x);
}