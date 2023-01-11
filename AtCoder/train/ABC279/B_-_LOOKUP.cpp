// Problem: B - LOOKUP
// Contest: AtCoder - TOYOTA SYSTEMS Programming Contest 2022(AtCoder Beginner Contest 279)
// URL: https://atcoder.jp/contests/abc279/tasks/abc279_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int  main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1.find(s2)+1)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}