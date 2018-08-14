#include<stdio.h>
int main()
{
    char a[999];
    int i=0;
    printf("enter text: ");
    scanf("%c",&a[i]);
    i=i+1;
    while(a[i-1]!='\n')
    {
        scanf("%c",&a[i]);
        i++;
    }
    i=0;
    while(a[i]!='\n')
    {
        printf("%c",a[i]);
        i++;
    }
}
