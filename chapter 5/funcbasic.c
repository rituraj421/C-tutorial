#include<stdio.h>
void display(); // function prototype
int main(){
    int a;
    printf("Intializing display function\n");
    display();
    printf("Display function finished its work\n"); 
    
    return 0;

}

void display(){
    printf("This is display\n");
}