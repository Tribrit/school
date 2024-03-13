#include <stdio.h>
int main()
{
    int age;

    printf("\nPlease enter your age: ");

    scanf("%d", &age);

    if (age > 18)
    {
        printf("\nyou are eligible to vote\n");
    }
    else
    {
        printf("\nplease wait untill you are 18\n\n");
    }

    return 0;
}