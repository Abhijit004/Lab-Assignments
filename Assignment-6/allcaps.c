#include<stdio.h>
void AllCaps(char []);
int main(){
    char str[30];
    printf("string : "); gets(str);
    AllCaps(str);
    printf("allcaps : %s",str);
    return 0; 
}

void AllCaps(char a[]){
    for(int i=0; a[i] != '\0'; i++){
        if(97<=a[i] && a[i]<=122)a[i] -= 32;
    }
}