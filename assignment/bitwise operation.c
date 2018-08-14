#include<stdio.h>
//#define MAX(a,b,c) (a>b&&a>c)?a:b:c
//#define MIN(a,b,c) (a<b&&a<c)?a:b:c
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a>b&&a>c)
   printf("%d is max\n",a);
   else if(b>a&&b>c)
   printf("%d is max\n",b);
   else
   printf("%d is max\n",c);
   if(a<b&&a<c)
   printf(" %d is min\n",a);
   else if(b<a&&b<c)
   printf("%d is min\n",b);
   else
   printf("%d is min\n",c);
   //printf("%d is max\n",MAX(a,b,c));
   //printf("%d is min\n",MIN(a,b,c));
   return 0;
}
