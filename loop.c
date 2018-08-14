#include<stdio.h>
int main()
{
    int i;
   int count=0;
   i=0;
    while(i<100)
    {
       i=i+2;
        printf("%d\n",i);
        count++;
    }
    printf("%d\n",count);
    for(i=0;i<100;i=i+1)
   {
      printf("%d\n",i);
   }
   i=1;
   do
   {
   printf("%d\n\n",i);
   i++;
   }while(i<100);

   printf("FINDING ODD EVEN NUMBER BETWEEN 1 TO 100\n\n");
   printf("_____________________________________________\n\n");
   i=1;
   while(i<=100)
   {
       if(i%2==0)
       printf("%d is a even number\n",i);
       else
       printf("%d is a odd number\n",i);
       i++;
   }
   printf("______________________________________________________\n");
   for(i=1;i<=100;i++)
   {
         if(i%2==0)
       printf("%d is a even number....\n",i);
       else
       printf("%d is a odd number....\n",i);
   }
  i=1;
   do
   {
       printf("HELLO WORLD\n");
       i++;
   }while(i<=100);  printf("______________________________________________________\n");

    printf("______________________________________________________\n");
    for(i=1;i<=100;i++)
    {
       if(i%3==0)
        printf("YES\n\n",i);
        else
        printf("NO\n\n",i);
    }
return 0;
}
