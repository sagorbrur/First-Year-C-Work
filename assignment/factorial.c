#include<stdio.h>
long factorial(n)
{
    if(n==0)
    return 1;
    else
    return (n*factorial(n-1));
}
int main()
{
    int n;
    long f;
    printf("enter an integer to find factorial:\n");
    scanf("%d",&n);
    if(n<0)
    printf("negative integer are not allowed\n");
    else{
    f=factorial(n);
    printf("%d!=%d\n",n,f);
    }
    return 0;
}

