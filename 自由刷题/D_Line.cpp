#include<iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        string s;
        cin>>s;
        ll res=0;
        for(ll i=0;i<x;i++)
        {
            if(s[i]=='L')
            {
            cout<<i-1<<' ';
            }
            if(s[i]=='R')
            {
                cout<<x-i+1<<' ';
            }
        }
        cout<<endl;
    }



    return 0;
}