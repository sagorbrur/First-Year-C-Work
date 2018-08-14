#include<stdio.h>
int main()
{
    int n,sum,i;
    scanf("%d",&n);
    sum=0;
    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
