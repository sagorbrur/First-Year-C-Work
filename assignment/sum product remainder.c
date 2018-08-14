#include<stdio.h>
int main()
{
     int a,b,sum,product,remainder;
        printf("enter a and b: \n");
        scanf("%d %d",&a,&b);
       sum=a+b;
       product=a*b;
       remainder=a%b;
        printf("sum=%d\nproduct=%d\nremainder=%d\n",sum,product,remainder);
        return 0;
}
