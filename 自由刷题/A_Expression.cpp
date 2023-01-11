// Problem: A. Expression
// Contest: Codeforces - Codeforces Round #274 (Div. 2)
// URL: https://codeforces.com/problemset/problem/479/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int res=0;
	res=max(res,a+b+c);
	res=max(res,a*b*c);	
	res=max(res,(a+b)*c);
	res=max(res,a*(b+c));
	cout<<res;
	return 0;
}