//1^2+2^2+----+n^2
#include<stdio.h>
int main()
{
    double n,sum,i;
    scanf("%lf",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("%lf",sum);
    return 0;
}
