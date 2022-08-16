#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    int a = 34;
    char b = 'g';
    float d = 234.56;

    struct employee el;
    el.code = 100;
    el.salary = 34.454;

    strcpy(el.name ,"RITU");

    printf("%d", el.code);

    

    return 0;
}