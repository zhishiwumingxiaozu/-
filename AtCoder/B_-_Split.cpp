#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int a[7]={0};
    int res = 0;
    string s;
    cin >> s;
    if(s[9]==1)cout<<"NO";
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(i<=3)
            {
                if(i%2==0)
                {
                    if(s[i]==1)s[i]++;
                }
                else
                {
                    if(s[i]==1)s[i+1]++;
                }
            }
            
        }
    }

    return 0;
}