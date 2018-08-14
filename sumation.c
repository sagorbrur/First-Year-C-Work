#include<stdio.h>
void main()
{
    int n;
    int sum=0;
    int i;
    printf("input n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sumation of 1 to %d is %d",n,sum);
    return 0;
}
