#include<stdio.h>
int main()
{
    char ch;
    printf("ch: \n");
    scanf("%c",ch);
   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
printf("%c is vowel\n", ch);
}
else {
printf("%c is consonant\n", ch);
}
}
