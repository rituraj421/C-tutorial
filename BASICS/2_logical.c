#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 15, d;
    printf("\n1.%d\t%d\t%d\t%d\n", a, b, c, d);

    d = a > b && b > c; //10>5 1 , 5 > 15 0, 1 && 0 , 0
    printf("2.%d\n", d);

    d = a > b || b > c; //                 1 || 0 , 1
    printf("3.%d\n", d);

    a = 10, b = 10, c = 2;
    d = a == b == c; // 1 == 10 -> 0
    printf("4.%d\n", d);

    d = a != b || c;
    printf("4.1)%d\t%d\n", d, c);

    d = a == b && b == c;
    printf("5.%d\n", d); //1 && 1 -> 1

    return 0;
}