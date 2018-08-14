#include<stdio.h>
int main()
{
    int i,sum=0;
    int mark[5];  //array declaration
    float avg;
    for(i=0;i<5;i++)
    {
        printf("enter mark\n");
        scanf("%d",&mark[i]); /* store data in array */

    }
    for(i=0;i<5;i++)
        sum=sum+mark[i];/* read data from an array*/
    avg=sum/5;
    printf("avg mark is %f\n",avg);
    return 0;

}
