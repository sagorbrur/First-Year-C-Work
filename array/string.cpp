#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter password: ";
    gets(s);
    if(strcmp(s,"sagor")==0)
    cout<<"Log in success."<<endl;
    else
    cout<<"password is wrong."<<endl;
    return 0;

}
