#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];

};

int main(){
    struct employee e1, e2, e3;
    printf("Enter the value of code e1: ");
    scanf("%d", &e1.code);
    printf("Enter the value of salary of  e1: ");
    scanf("%d", &e1.salary);
    printf("Enter the value for name of e1: ");
    scanf("%d", &e1.name);


    return 0;
}