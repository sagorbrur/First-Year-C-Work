#include<stdio.h>
/*count digit,white space,others*/
int main()
{
    int c,i,nwhite,nothers;
    int ndigit[10];
    nwhite=nothers=0;
    for(i=0;i<10;++i)
    ndigit[i]=0;
    //while((c=getchar())!=EOF)
    if(c>='0'&&c<='9')
    ++ndigit[c-'0'];
    else if(c==' '||c=='\n'||c=='\t')
    ++nwhite;
    else
    ++nothers;
    printf("digit=");
    for(i=0;i<10;++i)
    printf("%d",ndigit[i]);
    printf("white space=%d,other=%d\n",nwhite,nothers);

}
