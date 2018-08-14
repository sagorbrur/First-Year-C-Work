#include<stdio.h>
int main()
{
    float num;
    int choice;
    printf("1:feet to meters, 2:meters to feet.");
    printf("enter choice: ");
    scanf("%d",&choice);

    if(choice==1){
    printf("enter number of feet: ");
    scanf("%f",&num);
    printf("meters:%f", num/3.28);
    }
else
    {
        printf("enter number of meters: ");
        scanf("%f",&num);
        printf("feet:%f",num*3.28);
    }
    return 0;
}
