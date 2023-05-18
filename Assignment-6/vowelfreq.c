#include<stdio.h>
void VowelFreq(char []);
int main(){
    char str1[30];
    printf("string 1: ");gets(str1);
    VowelFreq(str1);
    return 0; 
}

void VowelFreq(char a[]){
    int freq[] = {0,0,0,0,0};
    char vowel[] = {'A','E','I','O','U'};
    for(int i=0; a[i]!='\0'; i++){
        switch(a[i]|(1<<5)){
            case 'a': freq[0]++; break;
            case 'e': freq[1]++; break;
            case 'i': freq[2]++; break;
            case 'o': freq[3]++; break;
            case 'u': freq[4]++; break;
        }
    }
    printf("occurences:\n");
    for(int i=0;i<5;i++){
        printf("%c/%c : %d\n",vowel[i],vowel[i]+32, freq[i]);
    }
}