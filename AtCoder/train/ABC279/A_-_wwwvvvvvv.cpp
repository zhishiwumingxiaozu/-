// Problem: A - wwwvvvvvv
// Contest: AtCoder - TOYOTA SYSTEMS Programming Contest 2022(AtCoder Beginner Contest 279)
// URL: https://atcoder.jp/contests/abc279/tasks/abc279_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int res=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='v')res+=1;
		else res+=2;
	}
	cout<<res<<endl;
	
	return 0;
}