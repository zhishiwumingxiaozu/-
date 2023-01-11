// Problem: P2676 [USACO07DEC]Bookshelf B
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2676
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main()
{
	int n,m;
	vector<int>a;
	cin>>n>>m;
	while(n--){
		int t;
		cin>>t;
		a.push_back(t);
	}
	sort(a.begin(),a.end(),cmp);
	int res=0,s=0;
	for(int i=0;i<a.size();i++){
		s+=a[i];
		res++;
		if(s>=m)break;
	}
	cout<<res<<endl;
	return 0;
}