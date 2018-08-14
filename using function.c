//sum,sub,multiple,division by function
#include<stdio.h>
int func1(int a,int b)
{   int sum;
    sum=a+b;
    return sum;
}
int func2(int a,int b)
{
    int subtruct;
    subtruct=a-b;
    return subtruct;
}
int func3(int a,int b)
{
    int multiple;
    multiple=a*b;
    return multiple;
}
int func4(int a,int b)
{
    float division;
    division=a/b;
    return division;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
   printf("%d\n%d\n%d\n%f\n",func1(a,b),func2(a,b),func3(a,b),func4(a,b));
    return 0;
}
