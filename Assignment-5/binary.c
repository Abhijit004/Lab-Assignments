#include<stdio.h>

int bin(int);

int main(){
    int dec;
    printf("Enter decimal: ");
    scanf("%d", &dec);
    printf("Binary format: %d\n", bin(dec));
    return 0;
}

int bin(int n){
    int ans = 0, pow = 1;
    while(n){
        ans+=pow*(n%2);
        n/=2; pow*=10;
    }
    return ans;
}
