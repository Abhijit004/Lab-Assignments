#include<stdio.h>

int main(int argc, char *argv[]){
    FILE *fpread, *fpwrite;

    if(argc!=3){
        printf("mismatching arguments\n");
        return 1;
    }
    fpread = fopen(argv[1], "r");
    fpwrite = fopen(argv[2], "w");

    if(fpread == NULL || fpwrite == NULL){
        printf("task unsuccessful");
        return 2;
    }

    char ch;
    while(1){
        ch = fgetc(fpread);
        if(ch == EOF)break;
        fputc(ch, fpwrite);
    }
    printf("Task Successful.\n");
    fclose(fpread);
    fclose(fpwrite);
    return 0;
}

/*

USAGE(linux): 
$ gcc filecopy.c -o filecopy
$ ./filecopy <file_to_copy> <file_to_make>

e.g.
$ gcc filecopy.c -o filecopy
$ ./filecopy new.txt makenew.txt

*This copies contents of new.txt into newly created file makenew.txt
*Add .exe extension if compiling on windows

*/