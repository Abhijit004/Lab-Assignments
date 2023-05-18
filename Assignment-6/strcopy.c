#include<stdio.h>
int issame(char [], char []);
int main(){
    char str1[30], str2[30];
    printf("string 1: ");scanf("%[^\n]%*c",str1);
    printf("string 2: ");scanf("%[^\n]%*c",str2);
    //%*c reads the newline character and here, the used * indicates that this newline character is discarded.
    issame(str1, str2)?printf("same"):printf("different");
    return 0; 
}

int issame(char a[], char b[]){
    for(int i=0; a[i]!='\0'||b[i]!='\0'; i++){
        if(a[i]!=b[i])return 0;
    }
    return 1;
}