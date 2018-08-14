#include<stdio.h>
int main()
{
    float score;
    printf("please enter your score: ");
    scanf("%f",&score);
    if(score>=80)
    {
        printf("GRADE:A+(4.00) \n");
    }
    else{
     if(score>=75)
     {
         printf("GRADE:A(3.75)\n");
     }
     else
     {
     if (score>=70)
     {
         printf("GRADE:A-(3.50)\n");
     }
     else{
    if(score>=65)
     {
         printf("GRADE:B+(3.25)\n");
     }
     else{
     if(score>=60)
     {
         printf("GRADE:B(3.00)\n");
     }
     else{
     if(score>=55)
     {
         printf("GRADE:B-(2.75)\n");
     }
     else{
         if(score>=50)
    {
         printf("GRADE:C(2.50)\n");
    }
    else{
        if(score>=45)
        {
            printf("GRADE:D(2.00)\n");
        }
    else
     {
         printf("GRADE:F(0.00)\n");
     }
     }
     }
     }
    }
    }
     }
    }
    printf("programmed by SAGOR SARKER");
    return 0;
}
