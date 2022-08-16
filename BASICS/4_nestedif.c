#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age); // & matlab address of mL

    if (age > 0)
    {
        if (age <= 40) // -34 <= 40  -> 1
            printf("You are sundar of age %d\n", age);
        else if (age > 40 && age < 80)
            printf("you are thoda old of age %d\n", age);
        else
            printf("you are very old\n");
    }
    else if (age < 0)
    {
        printf("nikal");
    }
    else
    {
        printf("congrats for coming");
    }

    return 0;
}