#include<stdio.h>
int ispalind(char []);
int main(){
    char str[30];
    printf("string 1: "); gets(str);
    ispalind(str)?printf("Palindrome"):printf("Non Palindrome");
    return 0; 
}

int ispalind(char a[]){
    int leng = 0;
    for(;a[leng]!='\0';leng++);
    for(int i=0; i<leng/2;i++){
        if(a[i]!=a[leng-1-i])return 0;
    }
    return 1;
}