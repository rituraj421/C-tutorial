#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr = fopen("Ritu.txt", "r");
    fscanf(ptr, "%d", &num); 
    printf("The value of num is %d\n", num);

    return 0;
}