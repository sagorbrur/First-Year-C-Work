#include<stdio.h>
void main()
{
    char a[15];
    int i=0;
    int count;
    char c[]="I LOVE MY COUNTRY.Z";

    printf("please input your name: ");
    scanf("%c",&a[i]);
    i=i+1;
    while(a[i-1]!='\n')
    {
        scanf("%c",&a[i]);
        i++;
    }
    count=i-1;
    i=0;
    while(i<=count)
    {
        scanf("%c",&a[i]);
        i++;
    }
    i=0;
    while(c[i]!='Z')
    {
        printf("%c",c[i]);
        i++;
    }
    return 0;
}
