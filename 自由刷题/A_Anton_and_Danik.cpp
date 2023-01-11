// Problem: A. Anton and Danik
// Contest: Codeforces - Codeforces Round #379 (Div. 2)
// URL: https://codeforces.com/contest/734/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A')a++;
		else a--;
	}
	if(a>0)cout<<"Anton";
	else if(a<0)cout<<"Danik";
	else cout<<"Friendship";
	
	return 0;
}