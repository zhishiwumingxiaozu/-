// Problem: B - Inverse Prefix Sum
// Contest: AtCoder - Denso Create Programming Contest 2022 Winter(AtCoder Beginner Contest 280)
// URL: https://atcoder.jp/contests/abc280/tasks/abc280_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[12],b[12];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}
	b[1]=a[1];
	for(int i=2;i<=n;i++){
		b[i]=a[i]-a[i-1];
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}