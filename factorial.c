#include<stdio.h>
void main()
{
    int n;
    int i=1;
    int f=1;
    printf("input n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("%d!=%d\n",n,f);
    return 0;

}
