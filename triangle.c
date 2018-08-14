#include<stdio.h>
int main()
{
    float a,b,c,s,area;
       printf("enter the value of a,b,c: \n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    if(a+b>c){
    printf("%f\n",s);
    }
    else{
    printf("mistake\n");
    }
    printf("_________________________\n");
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f\n",area);
     return 0;

}
