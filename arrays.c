#include<stdio.h>
int main()
{
    int mark[11];
   int i=0;
   while (i<6)
   {
       scanf("%d",&mark[i]);
       i++;
   }
i=0;
while(i<6)
{
   printf("%d\n",mark[i]);
   i++;
}
   return 0;
}
