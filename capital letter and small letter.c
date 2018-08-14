#include <stdio.h>
int main()
{
char ch ;
printf("enter the ch: \n");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z') {
printf("%c is lower case\n", ch);
}
if(ch >= 'A' && ch <= 'Z'){
printf("%c is upper case\n", ch);    //we can use here else also
}
return 0;
}
