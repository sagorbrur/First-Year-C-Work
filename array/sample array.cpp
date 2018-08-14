#include<iostream>
using namespace std;
int main()
{
    int sample[10];
    int t;
    for(t=0;t<10;++t)
    sample[t]=t*t;
    for(t=0;t<10;++t)
    cout<<sample[t]<<" "<<endl;
    return 0;
}
