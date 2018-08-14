
#include<iostream>
using namespace std;
int main()
{
    int i,max=0;
    int list[100];
    for(i=0;i<100;i++)
    //list[i]=rand();
    for(i=0;i<100;i++)
    if(max<list[i])
    max=list[i];
    cout<<"maximum value"<<max<<endl;
    return 0;
}
