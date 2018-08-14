#include<stdio.h>
int main()
{
    char i;
    printf("enter a character\n");
    scanf("%c",&i);
    switch(i)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("the letter is vowel.\n");
          break;
        default:
        printf("the letter is consonant.\n");
        break;
    }
    return 0;
}
