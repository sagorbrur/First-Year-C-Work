#include<stdio.h>
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return gcd(a-b,b);
        }
        else{
        return gcd(a,b-a);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int i,a,b,result;
    for(i=1;i<=t;++i){
    printf("enter two number to find their gcd: ");
    scanf("%d%d",&a,&b);
    result=gcd(a,b);
    printf("the gcd of %d and %d is %d\n",a,b,result);
    }
    return 0;
}

