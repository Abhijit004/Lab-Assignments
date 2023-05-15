#include <stdio.h>

float power(float, int);

int main(){
    int n;
    float x;
    printf("enter x and n: ");
    scanf("%f %d", &x, &n);
    printf("%.2f to the power %d = %.2f\n", x, n, power(x, n));
    return 0;
}

float  power(float x, int n){
    if(n<0){
        n = -n;
        x = 1/x;
    }
    float ans = 1.0;
    while(n--)ans *= x;
    return ans;
}