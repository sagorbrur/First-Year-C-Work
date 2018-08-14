//this function demonestrat xor() function
#include<stdio.h>
int main(void)
{
    int answer,count;
    int right,wrong;
    right=0;
    wrong=0;
    for(count=1;count<11;count++)
    printf("what is %d + %d?",count,count);
    scanf("%d",&answer);
   if(answer==count+count)
   {
       printf("right! ");
       right++;
   }
   else{
   printf("sorry u r wrong.");
   printf("the answer is %d\n",count+count);
   wrong++;

   }
   printf("you got %d right and %d wrong.",right,wrong);

   return 0;
}
