//a sample recursion program
#include<stdio.h>
int f(int n)
{
    if(n==0)
    return 1;
    return n*f(n-1);
}
int s(int n)
{
    if(n==1)
    return 1;
    return n+s(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    printf("%d",s(n));
    return 0;
}
