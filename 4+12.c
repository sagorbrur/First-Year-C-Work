#include<stdio.h>
int main()
{
    int n,sum,i;
    scanf("%d",&n);
    sum=0;
    for(i=4;i<=n;i=i+8)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
