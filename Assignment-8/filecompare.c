#include<stdio.h>

int main(int argc, char *argv[]){
    FILE *fp1, *fp2;

    if(argc!=3){
        printf("mismatching arguments\n");
        return(1);
    }
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");

    if(fp1 == NULL || fp2 == NULL){
        printf("task unsuccessful");
        return(2);
    }
    //Start comparing files
    char ch1, ch2;
    int answer = 1;
    while(1){
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if(ch1 == EOF || ch2 == EOF){
            answer = (ch1==ch2);
            break;
        }
        if(ch1!=ch2){
            answer = 0;
            break;
        }    
    }
    printf("%d\n", answer);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

/*

USAGE(linux): 
$ gcc filecompare.c -o filecompare
$ ./filecompare <file_1> <file_2>

e.g.
$ gcc filecompare.c -o filecompare
$ ./filecompare new.txt compare.txt

*This compares contents of files, returns 1 if they are same, 0 otherwise.
*Add .exe extension if compiling on windows

*/