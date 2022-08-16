#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr = fopen("Ritu.txt", "r");
    if (ptr == NULL){
        printf("The file doesnot exists\n");
    }
    else{
        fscanf(ptr, "%d", &num); 
    printf("The value of num is %d\n", num);

    }
    

    return 0;
}