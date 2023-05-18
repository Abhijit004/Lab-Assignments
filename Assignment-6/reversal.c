#include<stdio.h>
void Reverse(char []);
int main(){
    char str[30];
    printf("string : "); gets(str);
    Reverse(str);
    printf("Reverses str : %s",str);
    return 0; 
}

void Reverse(char a[]){
    int leng = 0;
    for(;a[leng]!='\0';leng++);
    for(int i=0; i<leng/2;i++){
        a[leng-i-1] ^= a[i] ^ (a[i]=a[leng-i-1]);
    }
}