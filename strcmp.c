#include<stdio.h>
#include<string.h>
int main()
{
    //int i;
    char c[100];
    char c1[100];
    char c2[100];
    gets(c);
    gets(c1);
    gets(c2);
    /*for(i=0;c[i]==c1[i]&&c[i]!='\0'&&c1[i]!='\0';i++){
    }
    if(c[i]=='\0'&&c1[i]=='\0'){
    printf("match\n");
    }
    else{
    printf("mismatch\n");
    }*/
    if(strcmp(c,c1)==0){
    printf("match\n");
    }
    else{
    printf("mismatch\n");
    }
    if(strcmp(c,c2)==0)
    {
        printf("match\n");
    }
    else
    {
        printf("mismatch\n");
    }
    if(strcmp("coder","coding")==0)
    {
        printf("match\n");
    }
    else
    {
        printf("mismatch\n");
    }
    return 0;
}
