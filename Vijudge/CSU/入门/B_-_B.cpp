#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>a;
    while(n--){
        string s;
        cin>>s;
        a.push_back(s);
    }
    vector<string>res,res1;
    for(int i=0;i<a.size();i++){
        string temp=a[i];
        reverse(temp.begin(),temp.end());
        for(int j=i+1;j<a.size()-1;i++){
            if(a[j].compare(temp)==0){
                res.push_back(a[i]);
                res.push_back(temp);
            }
        }
    }
    for(int i=0;i<a.size();i++){
        string temp=a[i];
        reverse(temp.begin(),temp.end());
        if(a[i].compare(temp)==0)res1.push_back(temp);
    }
    if(res.size()!=0&&res1.size()!=0){
        cout<<res[0];
        for(int i=0;i<res1.size();i++){
            cout<<res1[i];
        }
        cout<<res[1];
    }else {
        cout<<0<<endl;
    }

    return 0;
}