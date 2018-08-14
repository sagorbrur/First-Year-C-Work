
#include<stdio.h>
int main()
{
    double n,sum=0;
    int i;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("%lf",sum);
    return 0;
}



