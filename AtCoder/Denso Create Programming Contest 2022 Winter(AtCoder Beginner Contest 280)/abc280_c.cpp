// Problem: C - Extra Charactor
// Contest: AtCoder - Denso Create Programming Contest 2022 Winter(AtCoder Beginner Contest 280)
// URL: https://atcoder.jp/contests/abc280/tasks/abc280_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	int i;
	for(i=0;i<=s2.size();i++){
		if(s1[i]!=s2[i])break;
	}
	cout<<i+1;
	return 0;
}