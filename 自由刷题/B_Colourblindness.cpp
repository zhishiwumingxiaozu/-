#include<iostream>
using namespace std;
int a[110][110];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int res=0;
        for(int i=0;i<x;i++)
        {
            if(s1[i]=='G'||s1[i]=='B')
            {
                if(s2[i]=='G'||s2[i]=='B')
                {
                    continue;
                }
                else res=1;
            }
            if(s1[i]-s2[i]!=0)
            res=1;
        }
        if(res)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }


    return 0;
}