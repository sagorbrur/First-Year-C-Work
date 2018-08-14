#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);
    if(x>0&&y>0) {
    printf("1st quadant");
    }
    else if(x<0&&y>0){
    printf("2nd quadant");
    }
    else if(x<0&&y<0){
    printf("3rd quadant");
    }
    else if(x>0&&y<0){
    printf("4th quadant");
    }
    return 0;
}
