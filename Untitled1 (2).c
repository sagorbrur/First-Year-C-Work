//1^2+2^2+----+n^2
#include<stdio.h>
int main()
{
    int n,sum,i;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
