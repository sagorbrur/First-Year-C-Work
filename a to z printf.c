#include<stdio.h>
int main()
{
   int a;
    char i;
    float k;
    a=0;
    k=0;
    for(i='A';i<='Z';i++)
    {
        printf("%c\n",i);
    }
    printf("______________________________________________\n");
    for(i='a';i<='z';i++)
    {
        printf("%c\n",i);
    }
    printf("___________________________________\n");
    while(a<=100)
    {
        printf("%d\n",a);
        a++;
    }
    printf("______________________________________\n");
    while(k<=2.5)
   {
    printf("%f\n",k);
    k++;
   }
    printf("programe by sagor\n");
    return 0;
}
