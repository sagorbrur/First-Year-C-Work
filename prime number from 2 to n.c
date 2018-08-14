//finding prime from 2 to n number;
#include<stdio.h>
int main()
{
    int a,b,i,j,prime;
    printf("enter the range(a to b): \n");
    scanf("%d%d",&a,&b);
    printf("prime number from %d to %d\n",a,b);
    for(i=a;i<=b;i++)
    {
        prime=1;
        for(j=2;j<=i/2;j++)
        if(!(i%j)) prime=0;
        if(prime)
        printf("%d is prime\n",i);
    }
    return 0;
}
