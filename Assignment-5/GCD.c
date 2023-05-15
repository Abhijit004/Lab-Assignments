#include <stdio.h>

int gcd(int , int );
int gcd_advanced(int, int); //Advanced one. May skip this
int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d = %d",a,b,gcd(a,b));
    return 0;
}

int gcd(int x, int y){
    for(int i=x; i>=1; i--){
        if(x%i==0 && y%i==0){
            return i;
        }
    }
}

/*advanced - using Euclid's Division Lemma*/
int gcd_advanced(int x, int y){
    if(x%y==0)return y;
    return gcd(y, x%y);
}