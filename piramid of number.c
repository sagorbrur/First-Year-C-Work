#include<stdio.h>
int main()
{
    int num,i,j;
    printf("enter row: \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        printf("%6d",j);
        printf("\n");
    }
    printf("");
    return 0;
}
