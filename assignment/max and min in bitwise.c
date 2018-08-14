#include<stdio.h>
#define MAX(n,d) (n>d)?n:d
#define MIN(n,d) (n<d)?n:d
int  main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    printf("The maximum number is:%d\n",MAX(n,d));
     printf("The minimum number is:%d",MIN(n,d));


    return 0;
}
