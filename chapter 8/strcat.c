#include<stdio.h>
#include <string.h>
int main(){
   
   char st1[45] = "RITU";
   char *st2 = "DON";
   strcat(st1, st2);
   printf("now the st1 is %s", st1);
    return 0;
}