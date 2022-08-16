#include <stdio.h>
int main()
{
    int a = 5, b = 7, c;
    printf("\n1.)%d\t%d\t%d\n", a, b, c); // 5 7 0 or garbage values

    c = a == b;                         // 10 == 10
    printf("2.)%d\t%d\t%d\n", a, b, c); // 5 7 0

    a = 10, b = 25; // overwrite
    c = a != b;
    printf("3.)%d\t%d\t%d\n", a, b, c); // 10 25 1

    c = a < b;                          //10 < 25
    printf("4.)%d\t%d\t%d\n", a, b, c); // 10 25 1

    printf("5.)%d\n", a > b); //10 > 25 __ 0

    return 0;
}

//1 or 0
// true or false