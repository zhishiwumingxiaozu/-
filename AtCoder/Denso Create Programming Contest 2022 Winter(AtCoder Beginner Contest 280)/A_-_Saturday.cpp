// Problem: A - Pawn on a Grid
// Contest: AtCoder - Denso Create Programming Contest 2022 Winter(AtCoder Beginner Contest 280)
// URL: https://atcoder.jp/contests/abc280/tasks/abc280_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
char a[110][110];
int main()
{
	int h,w;
	cin>>h>>w;
	int res=0;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>a[i][j];
			if(a[i][j]=='#')res++;
		}
	}
	cout<<res;
	
	return 0;
}