#include <stdio.h>
struct date{
    int day; int month; int year;
};

struct employee{
    int code;
    char name[100];
    float salary;
    int deptno;
    struct date doj;
};

int main() {
    struct employee emps[10];
    int n;
    printf("How many records to store: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Employee No %d\n",i+1);
        printf("\tName: "); fflush(stdin); gets(emps[i].name);
        printf("\tCode: "); scanf("%d", &emps[i].code);
        printf("\tSalary: Rs. "); scanf("%f", &emps[i].salary);
        printf("\tDept No: "); scanf("%d", &emps[i].deptno);
        printf("\tJoined on(dd/mm/yyyy): ");scanf("%d/%d/%d",&emps[i].doj.day, &emps[i].doj.month, &emps[i].doj.year);
    }

    printf("\nDisplaying data of those whose salary > 10,000\n");
    for(int i=0; i<n; i++){
        if(emps[i].salary<=10000)continue;
        printf("\t[%d] %s\n", emps[i].code, emps[i].name);
        printf("\tJoined on %d/%d/%d in Dept no %d.\n",emps[i].doj.day, emps[i].doj.month, emps[i].doj.year, emps[i].deptno);
        printf("\tSalary: Rs. %.2f\n\n", emps[i].salary);
    }
    return 0;
}