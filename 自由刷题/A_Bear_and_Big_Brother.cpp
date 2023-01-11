// Problem: A. Bear and Big Brother
// Contest: Codeforces - Codeforces Round #405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// URL: https://codeforces.com/contest/791/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int res=0;
	while(a<=b){
		a*=3;
		b*=2;
		res++;
	}
	cout<<res;
	
	return 0;
}