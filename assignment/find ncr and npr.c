#include<stdio.h>
long factorial(int n)
{
    int c;
    long result=1;
    for(c=1;c<=n;c++)
    result=result*c;
    return(result);
}
long find_ncr(int n,int r)
{
    long result;
    result=factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}
long find_npr(int n,int r)
{
    long result;
    result=factorial(n)/factorial(n-r);
    return result;
}
long factorial(int);
long find_ncr(int,int);
long find_npr(int,int);
main()
{
    int n,r;
    long ncr,npr;
    printf("enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    ncr=find_ncr(n,r);
    npr=find_npr(n,r);
    printf("%dC%d=%d\n",n,r,ncr);
     printf("%dP%d=%d\n",n,r,npr);
     return 0;
}

