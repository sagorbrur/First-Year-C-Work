#include<stdio.h>
int main()
{
    int number;
    int age;
    printf("enter the number: ");
    scanf("%d",&number);
    if(number%2==0)
    {
       printf("the number is even.\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    printf("enter the age: ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("not matuard.unable for marry\n");
    }
    else
    {
        printf("eligible for marry\n");
    }
    return 0;
}
