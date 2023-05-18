#include<stdio.h>
void Concat(char [], char []);
int main(){
    char str1[30], str2[30];
    printf("string 1 : "); gets(str1);
    printf("string 2 : "); gets(str2);
    Concat(str1, str2);
    return 0; 
}

void Concat(char a[], char b[]){
    char ab[60];
    int i=0;
    for(; a[i]!='\0'; i++)ab[i]=a[i];
    for(int j=0; b[j]!='\0'; j++)ab[i++]=b[j];
    ab[i] = '\0';  //most important one
    printf("concatenated str: %s",ab);
}