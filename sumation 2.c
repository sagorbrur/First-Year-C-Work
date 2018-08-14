#include<stdio.h>
void main()
{
    int n;
    int i=0;
    int sum=0;
    printf("input n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {printf("%d\n",i);
         sum+=i;
        }
        i++;
    }
    printf("__________________________\n");
    printf("sumation is %d",sum);
    return 0;
}
