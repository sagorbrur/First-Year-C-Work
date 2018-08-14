//finding prime from 2 to n number;
#include<stdio.h>
int main()
{
    int n,i,j,prime;
    printf("enter the value n: \n");
    scanf("%d",&n);
    printf("prime number from 2 to %d\n",n);
    for(i=2;i<=n;i++)
    {
        prime=1;
        for(j=2;j<=i/2;j++)
        if(!(i%j)) prime=0;
        if(prime)
        printf("%d is prime\n",i);
    }
    return 0;
}
