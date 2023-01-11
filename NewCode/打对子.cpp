#include<iostream>
#include<cstring>
using namespace std;
int hash1[26],hash2[26];
int main()
{
    int n;
    cin>>n;
    memset(hash1,0,sizeof(hash1));
    memset(hash2,0,sizeof(hash2));
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        hash1[s1[i]-'A']++;
    }
    for(int i=0;i<n;i++)
    {
        hash2[s2[i]-'A']++;
    }
    int num1=0,num2=0;
    for(int i=0;i<26;i++)
    {
        num1+=hash1[i]%2;
    }
    for(int i=0;i<26;i++)
    {
        num2+=hash2[i]%2;
    }
    cout<<num1<<endl;
    if(num1<num2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}