#include<stdio.h>
first_function()
{
    printf("student\n");
}
int adding()
{
    int a,b;
    a=5;
    b=7;
    a=a+b;
    return a;
}
float sub()
{
    float j=100-50;
    return j;
}
char character()
{
    return 's';
}
int main()
{
   int i;
   float m;
   char k;
    printf("teacher\n");
    first_function();
    printf("school\n");
    i=adding();
    printf("%d\n",i);
    m=sub();
    printf("%2f\n",m);
    k=character();
    printf("%c\n",k);
}
