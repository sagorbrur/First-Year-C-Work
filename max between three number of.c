
#include<stdio.h>
#define MAX(n,d,s) (n>d)&&(n>s)?n:d:s

int  main()
{
    int n,d,s;
    scanf("%d%d%d",&n,&d,&s);
    printf("The maximum number is:%d\n",MAX(n,d,s));
    return 0;
}
