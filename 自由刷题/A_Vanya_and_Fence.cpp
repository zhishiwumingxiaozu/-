// Problem: A. Vanya and Fence
// Contest: Codeforces - Codeforces Round #355 (Div. 2)
// URL: https://codeforces.com/contest/677/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int res=0;
	int a,b;
	cin>>a>>b;
	while(a--){
		int t;
		cin>>t;
		if(t>b){
			res+=2;
		}
		else res+=1;
	}
	cout<<res;
	return 0;	
}