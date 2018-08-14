#include<stdio.h>
int main()
{
    char ch;
    printf("enter a lower case letter: ");
    scanf("%c",&ch);
    //ch=ch+'A'-'a';
    ch=ch-32;
    printf("the upper case is %c\n",ch);
    return 0;

}
