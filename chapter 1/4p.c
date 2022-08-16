#include <stdio.h>

int main()
{

    int principal = 200, rate = 5, year = 10;
    int simpleinterest = (principal * rate * year) / 100;
    printf("The value of simpleinterest is %d", simpleinterest);

    return 0;
}