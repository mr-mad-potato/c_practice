#include <iostream>
using namespace std;
int main()
{
    int n[10],temp,i,s;
    cin>>s;
    for(i=0;i<s;i++)
    {
        cin>>n[i];
    }
    cout<<n[10]<<endl;
    for(i=0;i<s/2;i++)
    {
        temp=n[i];
        n[i]=n[s-1-i];
        n[s-1-i]=temp;
    }
    cout<<n[10];
    return 0;
}
