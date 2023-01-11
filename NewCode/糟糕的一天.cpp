#include<iostream>
#include<algorithm>
using namespace std;
const  int N=1e6+10;
int a[N];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int res=0;
    int temp=a[n];
    while(n--)
    {
        if(a[n]<temp)res++;
        temp=max(temp,a[n]);
    }
    cout<<res<<endl;
    return 0;
}